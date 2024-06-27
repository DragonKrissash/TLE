#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> v(n,0);
        for(int a=0;a<n;a++)
        cin>>v[a];
        map<int,int>mp;
        for(auto a:v){
            mp[a]++;
        }
        int mx=0;
        for(auto key:mp){
            mx=max(mx,key.second);
        }
        int a=mp.size();
        int b=mx;
        if(a==b)cout<<a-1<<endl;
        else if(a>b)cout<<min(a-1,b)<<endl;
        else cout<<min(a,b-1)<<endl;
    }
}
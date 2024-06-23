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
        map<int,pair<int,int>>mp;
        int n;cin>>n;
        for(int a=0;a<n;a++){
            int x;cin>>x;
            mp[x].first++;
            mp[x].second=a;
        }
        for(auto[key,val]:mp){
            if(val.first==1)
            cout<<val.second+1<<endl;
        }
    }
}
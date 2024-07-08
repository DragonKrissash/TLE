#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x]++;
    }
    if(mp.size()==1)cout<<"Yes"<<endl;
    else if(mp.size()==2){
        vector<int>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        if(abs(v[0]-v[1])>=2)
        cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
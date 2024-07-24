#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x]++;
    }
    for(auto [k,v]:mp){
        if(v>1){
            cout<<"YES"<<nl;
            return;
        }
    }
    cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
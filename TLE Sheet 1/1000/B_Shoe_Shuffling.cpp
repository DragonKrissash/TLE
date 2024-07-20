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
    vector<int>v(n);
    for(int a=0;a<n;a++){
        cin>>v[a];
        mp[v[a]]++;
    }
    for(auto [k,v]:mp){
        if(v==1){
            cout<<-1<<nl;
            return;
        }
    }
    vector<int>ans(n+1);
    int ind=1;
    for(auto [k,v]:mp){
        ans[ind]=ind-1+v;
        int i=ind;
        ind++;
        v--;
        while(v--){
            ans[ind++]=i++;
        }
    }
    for(int a=1;a<=n;a++)cout<<ans[a]<<" ";
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
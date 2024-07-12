#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll a,b,n;cin>>a>>b>>n;
    ll ans=b-1;
    ll c=1;
    for(ll i=0;i<n;i++){
        int x;cin>>x;
        ans+=min(c+x,a)-1;
    }
    cout<<ans+1<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
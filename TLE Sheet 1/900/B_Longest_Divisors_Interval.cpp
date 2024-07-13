#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n;cin>>n;
    ll cnt=0;
    for(ll a=1;a<=n;a++){
        if(n%a==0)cnt++;
        else break;
    }
    cout<<cnt<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
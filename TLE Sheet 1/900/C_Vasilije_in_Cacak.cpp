#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll min=(k*(k+1))/2;
    ll tot=(n*(n+1))/2;
    ll max=tot-((n-k)*(n-k+1))/2;
    if(x>=min and x<=max)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
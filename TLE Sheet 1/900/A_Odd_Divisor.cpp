#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    if((n&(n-1))==0)cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
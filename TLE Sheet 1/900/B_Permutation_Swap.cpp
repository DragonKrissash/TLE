#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n; cin >> n;
    int ans=0;
    for(int a=1;a<=n;a++){
        int x;cin>>x;
        if(a!=x)
        ans=__gcd(ans,abs(x-a));
        }
    cout << ans << nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
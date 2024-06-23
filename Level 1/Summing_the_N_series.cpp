#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define MOD (ll)(1e9+7)

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll mod=(n%MOD);
        mod=(mod*mod)%MOD;
        cout<<mod*mod<<endl;
    }
}

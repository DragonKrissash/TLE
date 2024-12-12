//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
#define pb push_back
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    // cin>>tc;
    while(tc--){
    solve();
    }
}


int mod_mul(int a,int b,int MOD){
    return (((a%MOD)*(b%MOD))%MOD);
}
int expo(int a,int b,int mod){
    int res=1;
    while(b>0){
        if(b&1)res=mod_mul(res,a,mod);
        b>>=1;
        a=mod_mul(a,a,mod);
    }
    return res;
}

int mod_inv(int a,int mod){
    return expo(a,mod-2,mod);
}

void solve(){
    int n,k;cin>>k>>n;
    vi frl(2e6+1),ifrl(2e6+1);
    frl[0]=1;
    ifrl[0]=1;
    for(int a=1;a<2e6+1;a++)
    frl[a]=mod_mul(frl[a-1],a,MOD);
    ifrl[2e6]=mod_inv(frl[2e6],MOD);
    for(int a=2e6-1;a>=1;a--){
        ifrl[a]=mod_mul(ifrl[a+1],a+1,MOD);
    }
    int ans=mod_mul(frl[n+k-1],ifrl[k-1],MOD);
    ans=mod_mul(ans,ifrl[n],MOD);
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

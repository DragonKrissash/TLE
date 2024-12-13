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

const int N=1e6+1;

int mod_mul(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

int expo(int a,int b){
    int res=1;
    while(b>0){
        if(b&1)res=mod_mul(res,a);
        a=mod_mul(a,a);
        b>>=1;
    }
    return res;
}

int mod_add(int a,int b){
    return ((a%MOD)+(b%MOD))%MOD;
}

int mod_sub(int a,int b){
    return ((a%MOD)-(b%MOD)+MOD)%MOD;
}

void solve(){
    vi frl(N),ifrl(N);
    frl[0]=ifrl[0]=1;
    for(int a=1;a<N;a++){
        frl[a]=mod_mul(frl[a-1],a);
    }
    ifrl[N-1]=expo(frl[N-1],MOD-2);
    for(int a=N-2;a>=1;a--)
    ifrl[a]=mod_mul(a+1,ifrl[a+1]);
    int n;cin>>n;
    int pro=0;
    for(int a=2;a<=n;a++){
        if(a&1){
            pro=mod_sub(pro,ifrl[a]);
        }else{
            pro=mod_add(pro,ifrl[a]);
        }
    }
    pro=mod_mul(pro,frl[n]);
    cout<<pro<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
const int MOD = 1000000007;

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

const int N=1000001;

int mod_mul(int a,int b,int mod){
    return (((a%mod)*(b%mod))%mod);
}

int expo(int base,int pow,int mod){
    int res=1;
    while(pow>0){
        if(pow&1)res=mod_mul(res,base,mod);
        pow>>=1;
        base=mod_mul(base,base,mod);
    }
    return res;
}

int mod_inv(int a,int mod){
    return expo(a,mod-2,mod);
}

void solve(){
    string s;cin>>s;
    vi frl(N),ifrl(N);
    int n=s.size();
    frl[0]=1;
    for(int a=1;a<N;a++){
        frl[a]=mod_mul(a,frl[a-1],MOD);
    }
    ifrl[N-1]=expo(frl[N-1],MOD-2,MOD);
    for(int a=N-2;a>=1;a--){
        ifrl[a]=mod_mul(ifrl[a+1],a+1,MOD);
    }
    map<char,int>mp;
    for(int a=0;a<n;a++){
        mp[s[a]]++;
    }
    int pro=frl[s.size()];
    // cout<<pro<<nl;
    for(auto [k,v]:mp){
        // cout<<v<<sp<<ifrl[v]<<nl;
        pro=pro*ifrl[v];
        pro%=MOD;
    }
    cout<<pro<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

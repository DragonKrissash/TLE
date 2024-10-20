//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
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

int bin_power_mod(int base,int exp,int mod){
    base%=mod;
    int res=1;
    while(exp>0){
        if(exp&1){
            res=res * base % mod;
        }
        base=base * base %mod;
        exp>>=1;
    }
    return res;
}

int inverse_mod(int base,int mod){
    return bin_power_mod(base,mod-2,mod);
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    vector<int>has1(n,0),has2(n,0);
    int p1=31,mod1=1e9+7;
    int p2=37,mod2=1e9+9;
    has1[0]=s[0]-'a'+1;
    has2[0]=s[0]-'a'+1;
    for(int a=1;a<n;a++){
        has1[a]=(has1[a-1]+(s[a]-'a'+1)*bin_power_mod(p1,a,mod1))%mod1;
        // has2[a]=(has2[a-1]+(s[a]-'a'+1)*bin_power_mod(p2,a,mod2))%mod2;
    }
    for(int a=1;a<n;a++){
        int pre1=has1[a-1];
        int suf1=((has1[n-1]-has1[n-1-a] + mod1)*inverse_mod(bin_power_mod(p1,n-a,mod1),mod1))%mod1;
        // int pre2=has2[a-1];
        // int suf2=((has2[n-1]-has2[n-1-a] + mod2)*inverse_mod(bin_power_mod(p2,n-a,mod2),mod2))%mod2;
        if(pre1==suf1)cout<<a<<sp;
    }
}



 // Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

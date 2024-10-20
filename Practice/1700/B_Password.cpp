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
    int res=1;
    base%=mod;
    while(exp>0){
        if(exp&1)res=res*base %mod;
        base=base*base %mod;
        exp>>=1;
    }
    return res;
}

int inv_mod(int a,int mod){
    return bin_power_mod(a,mod-2,mod);
}

bool check(string &s,int l,int hash){
    int t=hash;
    int n=s.size();
    int p=31,mod=1e9+7;
    int cnt=0;
    // cout<<l<<nl;
    int inv=inv_mod(p,mod);
    int ppr=bin_power_mod(p,l-1,mod);
    int i=0,j=l-1;
    while(j<n){
        // cout<<i<<sp<<j<<nl;
        // cout<<"HASH "<<hash<<" T "<<t<<nl;
        if(hash==t)cnt++;
        t-=s[i]-'a'+1;
        t=(t*inv)%mod;
        i++;j++;
        // if(j<n)
        t=(t+(s[j]-'a'+1)*ppr + mod)%mod;
        
    }
    // cout<<nl;
    return cnt>2;
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    vi pre(n,0);
    pre[0]=s[0]-'a'+1;
    int p=31,mod=1e9+7;
    for(int a=1;a<n;a++){
        pre[a]=(pre[a-1]+(s[a]-'a'+1)*bin_power_mod(p,a,mod))%mod;
    }
    vi len;
    for(int a=1;a<n;a++){
        int pr=pre[a-1];
        int suf=((pre[n-1]-pre[n-1-a]+mod)*inv_mod(bin_power_mod(p,n-a,mod),mod))%mod;
        if(pr==suf)len.push_back(a);
    }
    // cout<<nl;
    int l=0,h=len.size()-1;
    int ans=0;
    while(l<=h){
        int m=l+(h-l)/2;
        if(check(s,len[m],pre[len[m]-1])){
            ans=len[m];
            l=m+1;
        }
        else h=m-1;
    }
    // cout<<ans<<nl;
    if(ans==0)cout<<"Just a legend";
    else cout<<s.substr(0,ans);
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

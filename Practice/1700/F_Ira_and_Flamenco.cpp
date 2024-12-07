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

int mod_mul(int a,int b,int m){
    return ((a%m)*(b%m))%m;
}

int mod_expo(int a,int b,int m){
    if(b==0) return 1;
    int res=mod_expo(a,b/2,m);
    res=mod_mul(res,res,m);
    if(b&1)res=mod_mul(res,a,m);
    return res;
}

int mod_inv(int a,int m){
    return mod_expo(a,m-2,m);
}

int mod_div(int a,int b,int m){
    return mod_mul(a,mod_inv(b,m),m);
}


int add(int a,int b,int mod){
   int ans=(a%mod + b%mod)%mod;
   if(ans<0){
      ans+=mod;
   }
   return ans;
}


signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,m;cin>>n>>m;
    vi v(n);
    input(v);
    sort(all(v));
    map<int,int>mp;
    int cnt=0;
    for(int a=0;a<n;a++){
        mp[v[a]]++;
    }
    vector<pii>vp;
    for(auto a:mp){
        vp.pb(a);
    }
    int pro=1;
    for(int a=0;a<vp.size();a++){
        pro=mod_mul(pro,vp[a].Y,MOD);
        if(a>=m-1){
            if(vp[a].X-vp[a-m+1].X < m){
                cnt=add(cnt,pro,MOD);
            }
            pro=mod_div(pro,vp[a-m+1].Y,MOD);
        }
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

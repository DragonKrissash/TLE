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
#define ld long double
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

struct HASH{
    vector<pii>pow,has;
    const int mod=1e9+7,b1=5689,b2=8861;
    HASH(string s){
        int n=s.size();
        pow.assign(n+1,{1,1});
        has.assign(n+1,{0,0});
        for(int a=0;a<n;a++){
            has[a+1]={
                (has[a].X*b1+(s[a]-'a'+1))%mod,
                (has[a].Y*b2+(s[a]-'a'+1))%mod
            };
            pow[a+1]={
                (pow[a].X*b1)%mod,
                (pow[a].Y*b2)%mod
            };
        }
    }
    pii get(int l,int r){
        l++;r++;
        int h1=(has[r].X-(has[l-1].X*pow[r-l+1].X)%mod+mod)%mod;
        int h2=(has[r].Y-(has[l-1].Y*pow[r-l+1].Y)%mod+mod)%mod;
        return {h1,h2};
    }

};

void solve(){
    string s;cin>>s;
    int n=s.size();
    HASH h(s);
    vi ans;
    for(int a=0;a<n-1;a++){
        pii h1=h.get(0,a);
        pii h2=h.get(n-1-a,n-1);
        if(h1==h2){
            ans.pb(a+1);
        }
    }
    for(int a:ans)cout<<a<<sp;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

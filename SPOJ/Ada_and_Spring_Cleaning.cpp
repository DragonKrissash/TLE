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
    cin>>tc;
    while(tc--){
    solve();
    }
}
struct HASH{
    vector<pii> hashes,pow;
    const int mod=1e9+7,b1=5689,b2=8861;
    HASH(string s){
        int n=s.size();
        hashes.assign(n+1,{0,0});
        pow.assign(n+1,{1,1});
        for(int a=0;a<n;a++){
            hashes[a+1]={
                (hashes[a].X*b1+(s[a]-'a'+1))%mod,
                (hashes[a].Y*b2+(s[a]-'a'+1))%mod
            };
            pow[a+1]={
                (pow[a].X*b1)%mod,
                (pow[a].Y*b2)%mod
            };
        }
    }
    pii get(int l,int r){
        l++;r++;
        int has1=(hashes[r].X-(hashes[l-1].X*pow[r-l+1].X)%mod+mod)%mod;
        int has2=(hashes[r].Y-(hashes[l-1].Y*pow[r-l+1].Y)%mod+mod)%mod;
        return {has1,has2};
    }
};

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    HASH h(s);
    set<pii>st;
    for(int a=0;a<=n-k;a++){
        pii has=h.get(a,a+k-1);
        st.insert(has);
    }
    cout<<st.size()<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    vector<int>h1,h2,p1,p2;
    const int mod=1e9+7,b1=31,b2=127;
    HASH(string s){
        int n=s.size();
        h1.resize(n+1);
        // h2.resize(n+1);
        p1.resize(n+1,1);
        // p2.resize(n+1,1);
        for(int a=0;a<n;a++){
            h1[a+1]=(h1[a]*b1+(s[a]-'a'+1))%mod;
            // h2[a+1]=(h2[a]*b2+(s[a]-'a'+1))%mod;
            p1[a+1]=(p1[a]*b1)%mod;
            // p2[a+1]=(p2[a]*b2)%mod;
        }
    }
    int get(int l,int r){
        l++;r++;
        int ha=(h1[r]-(h1[l-1]*p1[r-l+1])%mod+mod)%mod;
        // int hb=(h2[r]-(h2[l-1]*p2[r-l+1])%mod+mod)%mod;
        return ha;
    }
};
 
void solve(){
    string s;cin>>s;
    int n=s.size();
    HASH h(s);
    vi ans;
    for(int a=0;a<n;a++){
        bool y=1;
        int has=h.get(0,a);
        for(int b=a+1;b<n;b+=a+1){
            if(b+a>n-1){
                int r=n-b;
                // cout<<a<<sp<<r<<sp;
                int h2=h.get(0,r-1);
                int h1=h.get(b,n-1);
                // cout<<h2.X<<sp<<h2.Y<<sp<<has.X<<sp<<has.Y<<sp;
                if(h2!=h1){
                    // cout<<"not equal"<<nl;
                    y=0;
                }
                break;
            }
            int h2=h.get(b,b+a);
            if(h2!=has){
                y=0;
                break;
            }
        }
        if(y)ans.pb(a+1);
    }
    for(int a:ans)cout<<a<<sp;
}

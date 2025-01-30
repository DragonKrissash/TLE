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
    const int mod=1e9+7,b1=31,b2=37;
    HASH(string s){
        int n=s.size();
        h1.resize(n+1);
        p1.resize(n+1,1);
        for(int a=0;a<n;a++){
            h1[a+1]=(h1[a]*b1+(s[a]-'a'+1))%mod;
            p1[a+1]=(p1[a]*b1)%mod;
        }
    }
    int get(int l,int r){
        l++;r++;
        int has=(h1[r]-(h1[l-1]*p1[r-l+1])%mod+mod)%mod;
        return has;
    }
};

void solve(){
    string s;cin>>s;
    int n=s.size();
    HASH h(s);
    vi len;
    for(int a=0;a<n-1;a++){
        int h1=h.get(0,a);
        int h2=h.get(n-1-a,n-1);
        if(h1==h2){
            len.pb(a+1);
        }
    }
    if(len.size()==0){
        cout<<"Just a legend";
    }
    else{
        reverse(all(len));
        int ans=-1;
        for(int a:len){
            int has=h.get(0,a-1);
            for(int i=1;i<n-1;i++){
                int l=i,r=i+a-1;
                if(r>=n-1)break;
                if(has==h.get(l,r)){
                    ans=a;
                    cout<<s.substr(0,a);
                    return;
                }
            }
        }
        cout<<"Just a legend";
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

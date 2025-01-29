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

struct HASH{
    const int mod=1e9+7,b1=5689,b2=8861;
    vector<int>hashes,pows;
    
    HASH(string s){
        int n=s.size();
        hashes.assign(n+1,0);
        pows.assign(n+1,1);
        for(int a=0;a<n;a++){
            hashes[a+1]=(hashes[a]*b1+(s[a]-'a'+1))%mod;
            pows[a+1]=(pows[a]*b1)%mod;
        }
    }

    int get(int l,int r){
        l++;r++;
        int has=(hashes[r]-(hashes[l-1]*pows[r-l+1])%mod+mod)%mod;
        return has;
    }
};

signed main(){

    fastio
    int tc;
    tc=1;
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    string s,t;cin>>s>>t;
    HASH h(s),ht(t);
    // cout<<s<<nl<<t<<nl;
    int has=ht.get(0,t.size()-1);
    int cnt=0;
    if(t.size()>s.size()){
        cout<<0<<nl;
        return;
    }
    for(int a=0;a<=s.size()-t.size();a++)
    {   int temp=h.get(a,a+t.size()-1);
    // cout<<temp<<sp<<has<<nl;
        if(temp==has)cnt++;
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

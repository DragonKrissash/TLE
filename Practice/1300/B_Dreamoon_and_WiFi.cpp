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

double expo(double a,int b){
    double res=1;
    while(b>0){
        if(b&1)res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

double frl(int a){
    double res=1;
    for(int i=1;i<=a;i++)
    res*=i;
    return res;
}

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size();
    int reqcnt1=0,reqcnt0=0;
    int hascnt1=0,hascnt0=0;
    for(int a=0;a<n;a++){
        if(s[a]=='+')reqcnt1++;
        else reqcnt0++;

        if(t[a]=='+')hascnt1++;
        else if(t[a]=='-')hascnt0++;
    }
    // cout<<reqcnt1<<sp<<reqcnt0<<sp<<hascnt1<<sp<<hascnt1<<nl;
    if(reqcnt1<hascnt1 || reqcnt0<hascnt0){
        cout<<"0.000000000000"<<nl;
        // cout<<"INSIDE"<<nl;
        return;
    }
    cout<<setprecision(12)<<fixed;
    reqcnt1-=hascnt1;
    reqcnt0-=hascnt0;
    double prob=expo(0.5,(reqcnt0+reqcnt1));
    // cout<<"PROB "<<prob<<nl;
    prob*=frl((reqcnt0+reqcnt1));
    prob/=frl(reqcnt0);
    prob/=frl(reqcnt1);
    cout<<prob<<nl;

}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    vi pre(n),suf(n);
    for(int a=0;a<n;a++){
        pre[a]=v[a]+a+1;
    }
    for(int a=n-1;a>=0;a--){
        suf[a]=v[a]-a-1;
    }
    for(int a=1;a<n;a++){
        pre[a]=max(pre[a-1],pre[a]);
    }
    for(int a=n-2;a>=0;a--){
        suf[a]=max(suf[a+1],suf[a]);
    }
    int sum=0,maxsum=0;
    for(int a=1;a<n-1;a++){
        sum+=pre[a-1];
        sum+=suf[a+1];
        maxsum=max(maxsum,sum+v[a]);
        sum=0;
    }
    cout<<maxsum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

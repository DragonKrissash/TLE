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

bool inside(int x1,int r1,int x2,int r2){
    // if(x1==x2 and r1<=r2)return 1;
    if(x1-r1>=x2-r2)return 1;
}

bool outside(int x1,int r1,int x2,int r2){
    if(x1+r1<x2-r2)return 1;
}

void solve(){
    int n,m;cin>>n>>m;
    vi x(n),r(n);
    input(x);
    input(r);
    map<int,int>mp;
    for(int a=0;a<n;a++){
        for(int b=(-1LL)*r[a];b<=r[a];b++){
            int cur=sqrt(r[a]*r[a]-b*b);
            mp[b+x[a]]=max(mp[b+x[a]],cur);
        }
    }
    int ans=0;
    for(auto [k,v]:mp){
        ans+=2*v+1;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

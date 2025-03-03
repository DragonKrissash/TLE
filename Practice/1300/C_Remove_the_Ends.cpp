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
    vi suf(n),pre(n);
    if(v[0]>0)pre[0]=v[0];
    for(int a=1;a<n;a++){
        if(v[a]>0){
            pre[a]=pre[a-1]+v[a];
        }
        else pre[a]=pre[a-1];
    }
    if(v[n-1]<0)suf[n-1]=abs(v[n-1]);
    for(int a=n-2;a>=0;a--){
        if(v[a]<0){
            suf[a]=abs(v[a])+suf[a+1];
        }
        else suf[a]=suf[a+1];
    }
    int ans=0;
    for(int a=0;a<n-1;a++)ans=max(pre[a]+suf[a+1],ans);
    ans=max({ans,pre[n-1],suf[0]});
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

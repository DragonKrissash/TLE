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

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    if(n==1){
        cout<<v[0]*2<<nl;
        return;
    }
    sort(all(v));
    vi pre(n),suf(n);
    pre[0]=v[0];
    suf[n-1]=v[n-1];
    for(int a=1;a<n;a++){
        pre[a]=pre[a-1]+v[a];
    }
    for(int a=n-2;a>=0;a--){
        suf[a]=suf[a+1]+v[a];
    }
    int sum=INT_MAX;
    for(int a=0;a<n-1;a++){
        if(pre[a]<=suf[a+1]){
            sum=min(sum,suf[a+1]);
        }
    }
    for(int a=0;a<n-1;a++){
        if(pre[a]>=v[n-1]){
            cout<<pre[n-1]<<nl;
            return;
        }
    }
    cout<<sum*2<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

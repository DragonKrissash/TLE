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
    int a,b,n,m;cin>>a>>b>>n>>m;
    // if(n<=m){
    //     cout<<n*min(a,b)<<nl;
    // }
    // else if(n==m+1){
    //     cout<<min(m*a,(m+1)*b)<<nl;
    // }
    // else{
    //     if((m+1)*b<=m*a){
    //         cout<<n*b<<nl;
    //     // }
    //     // else{
    //         cout<<(n/(m+1)) * min(a*m,b*(m+1)) + n%(m+1)*min(a,b)<<nl;
    //     }
    // }
    cout<<(n/(m+1)) * min(a*m,b*(m+1)) + n%(m+1)*min(a,b)<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

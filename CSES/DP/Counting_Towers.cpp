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
// void add();

int add(int x,int y){
    return ((x)+(y))%MOD;
}
vector<vi>dp(1e6+1,vi(2));
signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    dp[1][0]=1;
    dp[1][1]=1;
    for(int a=2;a<=1e6;a++){
        dp[a][0]=add(2LL*dp[a-1][0],dp[a-1][1]);
        dp[a][1]=add(4LL*dp[a-1][1],dp[a-1][0]);
    }
    while(tc--){
    solve();
    }
}

int mul(int x,int y){
    return ((x%MOD)*(y%MOD))%MOD;
}

void solve(){
    int n;cin>>n;
    // dp[n][0]=1;
    // dp[n][1]=1;
    // for(int a=n-1;a>=0;a--){
    //     for(int b=0;b<=1;b++){
    //         if(!b){
    //             dp[a][b]=add(2LL*dp[a+1][0],dp[a+1][1]);
    //         }   
    //         else{
    //             dp[a][b]=add(4LL*dp[a+1][1],dp[a+1][0]);
    //         }
    //     }
    // }
    cout<<add(dp[n][0],dp[n][1])<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

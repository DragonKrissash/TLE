#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int n,k,dp[1000000],ht[100000];

int f(int i){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=INT_MAX;
    for(int a=1;a<=k;a++){
        if((i+a)<n)
        ans=min(ans,abs(ht[i]-ht[i+a])+f(i+a));
    }
    dp[i]=ans;
    return ans;
}

void solve(){
    cin>>n>>k;
    for(int a=0;a<=n;a++){
        dp[a]=-1;
    }
    for(int a=0;a<n;a++)cin>>ht[a];
    cout<<f(0)<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
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

int n,wt;
int dp[109][100009];
int w[109];
int v[109];

int f(int i,int W){
    if(i==n)return 0;
    if(dp[i][W]!=-1)return dp[i][W];
    int ans=f(i+1,W);
    if(w[i]+W <=wt)
    ans=max(ans,f(i+1,W+w[i])+v[i]);
    dp[i][W]=ans;
    return ans;
}

void solve(){
    cin>>n>>wt;
    for(int a=0;a<n;a++){
        cin>>w[a]>>v[a];
    }
    memset(dp,-1,sizeof(dp));
    cout<<f(0,0)<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
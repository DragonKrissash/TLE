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

int n;int dp[1000000];int h[1000000];

int f(int i){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=abs(h[i]-h[i+1])+f(i+1);
    if(i+2<n)
    ans=min(ans,abs(h[i]-h[i+2])+f(i+2));
    dp[i]=ans;
    return ans;
}

void solve(){
    cin>>n;
    for(int a=0;a<=n;a++){
        dp[a]=-1;
    }
    for(int a=0;a<n;a++){
        cin>>h[a];
    }
    cout<<f(0)<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
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

int dp[100005];
int visited[100005];
int n,e;
vector<int>adj[100005];

void visit(int ver){
    visited[ver]=1;
    dp[ver]=0;
    for(auto child:adj[ver]){
        if(!visited[child])
        visit(child);
        dp[ver]=max(dp[ver],1+dp[child]);
    }
}

void solve(){
    cin>>n>>e;
    for(int a=1;a<=e;a++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int a=1;a<=n;a++){
        if(!visited[a])
        visit(a);
    }
    int ans=0;
    for(int a=1;a<=n;a++){
        ans=max(ans,dp[a]);
    }
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
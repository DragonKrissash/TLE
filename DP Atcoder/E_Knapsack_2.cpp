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

int n,wht;
int dp[101][100009];
int w[100005],v[100005];

int f(int i,int rv){
    if(i==n)return rv==0 ? 0:INT_MAX;
    if(dp[i][rv]!=-1)return dp[i][rv];
    int ans=0;
    ans=f(i+1,rv);
    if(rv-v[i]>=0)ans=min(ans,w[i]+f(i+1,rv-v[i]));
    dp[i][rv]=ans;
    return ans;
}

void solve(){
    cin>>n>>wht;
    int v_max=0;
    for(int a=0;a<n;a++){
        cin>>w[a]>>v[a];
        v_max+=v[a];
    }
    memset(dp,-1,sizeof(dp));
    int ans=0;
    for(int a=v_max;a>=0;a--){
        if(f(0,a)<=wht){
            ans=a;
            break;
        }
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
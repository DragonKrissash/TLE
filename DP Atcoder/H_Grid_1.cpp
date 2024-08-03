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
const int mod=1e9+7;


void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(int a=0;a<n;a++)cin>>s[a];
    vector<vector<int>>dp(n,vector<int>(m,0));
    dp[0][0]=1;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            if(s[a][b]=='#')
            continue;
            if(a==0 and b==0)
            continue;
            if(a==0)
            dp[a][b]=dp[a][b-1];
            else if(b==0)
            dp[a][b]=dp[a-1][b];
            else
            dp[a][b]=(dp[a-1][b]%mod+dp[a][b-1]%mod)%mod;
        }
    }
    cout<<dp[n-1][m-1];
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
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

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size();
    int m=t.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int a=1;a<=n;a++){
        for(int b=1;b<=m;b++){
            if(s[a-1]==t[b-1])dp[a][b]=1+dp[a-1][b-1];
            else dp[a][b]=max(dp[a-1][b],dp[a][b-1]);
        }
    }
    string lcs="";
    int a=n,b=m;
    while(a!=0 and b!=0){
        if(dp[a-1][b]==dp[a][b])a--;
        else if(dp[a][b-1]==dp[a][b])b--;
        else {
            lcs=s[a-1]+lcs;
            a--;b--;
        }
    }
    cout<<lcs;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
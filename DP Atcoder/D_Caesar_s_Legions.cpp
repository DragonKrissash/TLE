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

int n1,n2,k1,k2;
int dp[101][101][11][11];

int f(int n1,int n2, int f1, int f2){
    if(n1==0 and n2==0)return 1;
    int ans=0;
    if(dp[n1][n2][f1][f2]!=-1) return dp[n1][n2][f1][f2];
    if(n1>0 and f1<k1) ans=f(n1-1,n2,f1+1,0);
    if(n2>0 and f2<k2) ans+=f(n1,n2-1,0,f2+1);
    ans=ans%100000000;
    dp[n1][n2][f1][f2]=ans;
    return ans;
}

void solve(){
    cin>>n1>>n2>>k1>>k2;
    memset(dp,-1,sizeof(dp));
    cout<<f(n1,n2,0,0);
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
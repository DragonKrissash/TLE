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

int n,dp[100005][3],arr[100005][3];

int f(int i,int c){
    if(i==n-1)return arr[i][c];
    if(dp[i][c]!=-1)return dp[i][c];
    int ans=0;
    if(c==0){
        ans=arr[i][c]+f(i+1,1);
        ans=max(ans,arr[i][c]+f(i+1,2));
        dp[i][c]=ans;
        return ans;
    }else if(c==1){
        ans=arr[i][c]+f(i+1,0);
        ans=max(ans,arr[i][c]+f(i+1,2));
        dp[i][c]=ans;
        return ans;
    }
    else{
        ans=arr[i][c]+f(i+1,0);
        ans=max(ans,arr[i][c]+f(i+1,1));
        dp[i][c]=ans;
        return ans;
    }
}

void solve(){
    cin>>n;
    for(int a=0;a<=n;a++){
        for(int b=0;b<3;b++){
            dp[a][b]=-1;
            cin>>arr[a][b];
        }
    }
    int ans=max({f(0,0),f(0,1),f(0,2)});
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
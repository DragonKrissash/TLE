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

int n;
vector<double>props;
double dp[3000][3000];
double f(int i,int h){
    // cout<<i<<" "<<h<<" "<<nl;
    if(i==n){
        if(h>i-h)
        return 1.0;
        else return 0.0;   
    }
    if(dp[i][h]!=-1.0)return dp[i][h];
    double ans=0;
    ans=props[i]*f(i+1,h+1);
    ans+=(1-props[i])*f(i+1,h);
    // cout<<i<<" "<<h<<" "<<"ans: "<<ans<<" "<<nl;
    dp[i][h]=ans;
    return ans;

} 

void solve(){
    cin>>n;
    
    for(int a=1;a<=n;a++){
        double x;cin>>x;
        props.push_back(x);
    }
    for(int a=0;a<3000;a++){
        for(int b=0;b<3000;b++)
        dp[a][b]=-1.0;
    }
    // for(int a=0;a<n;a++)cout<<props[a]<<" ";
    double tot=0;
    cout<<fixed<<setprecision(10);
    cout<<f(0,0);
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
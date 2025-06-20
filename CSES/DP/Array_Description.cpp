//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
#define pb push_back
#define ld long double
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int valid(int x,int m){
    return x>=1 and x<=m;
}

void solve(){
    int n,m;cin>>n>>m;
    vi v(n);
    input(v);
    vector<vi>dp(n+1,vi(m+1));
    for(int a=1;a<=m;a++){
        if(v[0]==a or v[0]==0){
            dp[1][a]=1;
        }
    }
    for(int a=2;a<=n;a++){
        for(int k=1;k<=m;k++){
            if(v[a-1]!=0 and v[a-1]!=k)
            {
                dp[a][k]=0;
                continue;
            }
            for(int pre=k-1;pre<=k+1;pre++){
                if(!valid(pre,m))
                continue;
                dp[a][k]=(dp[a][k]+dp[a-1][pre])%MOD;
            }
        }
    }
    int ans=0;
    for(int a=1;a<=m;a++)ans=(ans+dp[n][a])%MOD;
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

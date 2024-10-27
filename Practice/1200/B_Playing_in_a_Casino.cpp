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
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,m;cin>>n>>m;
    vector<vi> v(m,vi(n));
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            cin>>v[b][a];
        }
    }
    int ans=0;
    vector<vi>pre(m,vi(n));
    for(int a=0;a<m;a++){
        sort(all(v[a]));
        pre[a][n-1]=v[a][n-1];
        for(int b=n-2;b>=0;b--){
            pre[a][b]=pre[a][b+1]+v[a][b];
        }
    }
    for(int a=0;a<m;a++){
        for(int b=0;b<n-1;b++){
            ans+=pre[a][b+1]-(n-b-1)*v[a][b];
        }
    }
    cout<<ans<<nl;

}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

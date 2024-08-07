#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define l(i,st,n) for(int i=st;i<n;i++)
#define rl(i,st,n) for(int i=n-1;i>=st;i--)
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int>v(n+1);
    for(int a=y;a<=x;a++){
        v[a]=1;
    }
    int ch=-1;
    for(int a=x+1;a<=n;a++){
        v[a]=ch;
        ch=-ch;
    }
    ch=-1;
    for(int a=y-1;a>=1;a--){
        v[a]=ch;
        ch=-ch;
    }
    l(a,1,n+1){
        cout<<v[a]<<" ";
    }
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
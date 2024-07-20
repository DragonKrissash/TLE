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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>pre(n,0);
    if(s[0]=='W')
    pre[0]=1;
    for(int a=1;a<n;a++){
        if(s[a]=='W')
        pre[a]=pre[a-1]+1;
        else pre[a]=pre[a-1];
    }
    int minchange=INT_MAX;
    int i=0,j=k-1;
    while(j<n){
        // cout<<i<<" "<<j<<nl;
        if(i==0)
        minchange=min(minchange,pre[j]);
        else
        minchange=min(minchange,pre[j]-pre[i-1]);
        i++;j++;
    }
    cout<<minchange<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
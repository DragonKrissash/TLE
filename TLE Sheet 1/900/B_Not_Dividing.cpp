#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n,0);
    input(v);
    for(int a=0;a<n-1;a++){
        if(v[a]==1)
        v[a]=2;
        if(v[a+1]%v[a] ==0)
        v[a+1]++;
    }
    for(int a=0;a<n-1;a++){
        if(v[a]==1)
        v[a]=2;
        if(v[a+1]%v[a] ==0)
        v[a+1]++;
    }
    for(int a=0;a<n;a++)
    cout<<v[a]<<" ";
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
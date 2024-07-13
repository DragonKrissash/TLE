#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n,0);
    input(v);
    int minEle=INT32_MAX;
    for(int a=0;a<n;a++)
    minEle=min(minEle,v[a]);
    int dif=v[n-1]-minEle;
    int maxEle=0;
    for(int a=0;a<n;a++)
    maxEle=max(maxEle,v[a]);
    dif=max(dif,maxEle-v[0]);
    for(int a=0;a<n-1;a++){
        dif=max(dif,v[a]-v[a+1]);
    }
    cout<<dif<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
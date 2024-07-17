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
    vi preMin(n,INT_MAX);
    preMin[0]=v[0];
    for(int a=1;a<n;a++){
        preMin[a]=min(preMin[a-1],v[a]);
    }
    int sum=accumulate(all(preMin),0,[](int a,int b){return a+b;});
    cout<<sum<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
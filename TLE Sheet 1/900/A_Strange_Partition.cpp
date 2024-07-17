#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,x;cin>>n>>x;
    vi v(n,0);
    input(v);
    int sum1=accumulate(all(v),0LL,[](int a,int b){return a+b;});
    int sum2=0;
    for(int a=0;a<n;a++){
        sum2+=(v[a]+x-1)/x;
    }
    cout<<(sum1+x-1)/x<<" "<<sum2<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
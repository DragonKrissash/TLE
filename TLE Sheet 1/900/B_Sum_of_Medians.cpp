#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    vi v(n*k,0);
    input(v);
    int ind=n-((n+1)/2 -1);
    int sum=0;
    int cnt=0;
    for(int a=n*k-ind;a>=0;a-=ind){
        sum+=v[a];
        cnt++;
        if(cnt==k) break;
    }
    cout<<sum<<nl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
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
    int n;cin>>n;
    vector<vector<int>>v(n);
    int sum=0;
    int mi1=INT_MAX,mi2=INT_MAX;
    for(int a=0;a<n;a++){
        int m;cin>>m;
        vector<int>vm(m);
        input(vm);
        sort(all(vm));
        sum+=vm[1];
        mi1=min(mi1,vm[0]);
        mi2=min(mi2,vm[1]);
    }
    
    cout<<sum-mi2+mi1<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
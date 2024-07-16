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
    int one=0;
    int zer=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        if(x==1)one++;
        if(x==0)zer++;
    }
    int res=one*(pow(2,zer));
    cout<<res<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
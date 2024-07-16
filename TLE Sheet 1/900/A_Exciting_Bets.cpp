#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b;cin>>a>>b;
    if(a==b)cout<<0<<" "<<0<<nl;
    else{
        if(a<b)swap(a,b);
        cout<<a-b<<" "<<min(b%(a-b),(a-b)-b%(a-b))<<nl;
        }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
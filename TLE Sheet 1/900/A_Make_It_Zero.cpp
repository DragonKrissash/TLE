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
    bool y=true;
    for(int a=0;a<n;a++){
        if(v[a]!=0)
        y=false;
    }
    if(y)cout<<0<<nl;
    else{
        if(n%2==0){
            cout<<2<<nl<<1<<" "<<n<<nl;
            cout<<1<<" "<<n<<nl;
        }else{
            cout<<4<<nl;
            cout<<1<<" "<<n<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<<n-1<<" "<<n<<nl;
            cout<<1<<" "<<n<<nl;
        }
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
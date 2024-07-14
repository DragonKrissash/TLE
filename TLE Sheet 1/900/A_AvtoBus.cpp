#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n;cin>>n;
    if((n&1)==1){
        cout<<-1<<nl;
    }
    else{
        if(n%4 ==0 and n%6 ==0)
        {
            cout<<n/6<<" "<<n/4<<nl;
        }
        else {
            ll m=n/2;
            if(m==1)cout<<-1<<nl;
            else
            cout<<((m%3 ==0)? m/3:m/3 +1)<<" "<<m/2<<nl;
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
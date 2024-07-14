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
    vector<ll>v(n,0);
    ll zerocnt=0;
    for(ll a=0;a<n;a++){
        cin>>v[a];
    }
    ll l=-1,r=-1;
    for(ll a=0;a<n;a++){
        if(v[a]!=0){
            if(l==-1 and r==-1)
            {
                l=a;
                r=a;
            }
            else{
                r=a;
            }
        }
    }
    if(l==-1 and r==-1){
        cout<<0<<nl;
    }else{
        ll cnt=0;
        for(ll a=l;a<=r;a++){
            if(v[a]==0)cnt++;
        }
        if(cnt==0)cout<<1<<nl;
        else cout<<2<<nl;
    }
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
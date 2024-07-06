#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n,z;
    cin>>n>>z;
    multiset<int>v;
    for(ll a=0;a<n;a++){
        int x;cin>>x;
        v.insert(x);
    }
    ll ans=0;
    bool y=true;
    while(z>0 && v.size()){
        ans++;
        int a=*v.rbegin();
        v.erase(--v.end());
        z-=a;
        a/=2;
        if(a>0)v.insert(a);
    }
    if(z<=0)cout<<ans<<endl;
    else cout<<"Evacuate"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
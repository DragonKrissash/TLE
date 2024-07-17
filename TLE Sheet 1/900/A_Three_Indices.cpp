#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define sp " "

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n+1,0);
    for(int a=1;a<=n;a++)cin>>v[a];
    for(int a=2;a<n;a++){
        if(v[a]>v[a-1] and v[a]>v[a+1])
        {
            cout<<"YES"<<nl;
            cout<<a-1<<" "<<a<<sp<<a+1<<nl;
            return;
        }
    }
    cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
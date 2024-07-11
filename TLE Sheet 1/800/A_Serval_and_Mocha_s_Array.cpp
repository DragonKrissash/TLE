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
    vector<int>v(n,0);
    input(v);
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(gcd(v[a],v[b])<=2)
            {
                cout<<"Yes"<<nl;
                return;
            }
        }
    }
    cout<<"No"<<nl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
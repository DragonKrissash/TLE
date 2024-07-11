#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>v(n,0);
    int cnt=0;
    for(int a=n;a>0;a--){
        if(a <= m){
            cnt++;
            cout<<cnt<<" ";
        }else{
            cout<<a<<" ";
        }
    }
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(k,0);
    input(v);
    sort(all(v));
    int num=0;
    for(int a=k-2;a>=0;a--){
        if(v[a]==1){
            num++;
        }
        else{
            num=num+(v[a]-1)+v[a];
        }
    }
    cout<<num<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
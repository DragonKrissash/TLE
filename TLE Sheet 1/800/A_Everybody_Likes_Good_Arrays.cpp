#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define get(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int>v(n,0);
    get(v);
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    for(int a=1;a<n;a++){
        if(v[a]%2 == v[a-1]%2)
        cnt++;
    }
    cout<<cnt<<endl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
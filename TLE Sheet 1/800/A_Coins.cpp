#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n;cin>>n;
    ll k;cin>>k;
    if(n%2==0)cout<<"YES"<<endl;
    else if(k%2==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
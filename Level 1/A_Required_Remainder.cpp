#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll x,y,n;
        cin>>x>>y>>n;
        cout<<y+((n-y)/x)*x<<endl;
    }
}
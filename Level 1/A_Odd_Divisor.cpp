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
        ll n;cin>>n;
        if((n&(n-1)) == 0) 
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
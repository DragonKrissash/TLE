#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    if(n==1){
        cout<<0<<nl;
        return;
    }
    int opr=0;
    while(n>1){
        opr++;
        for(int a=1;a<k;a++)
        n--;
        if(n==1)break;
    }
    cout<<opr<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
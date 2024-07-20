#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int getDiv(int n){
    for(int a=2;a<=sqrt(n);a++){
        if(n%a==0){
           return n/a;
        }
    }
    return n;
}

void solve(){
    int n;cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<nl;
        return;
    }
    else{
        int a=getDiv(n);
        if(a==n)cout<<1<<" "<<n-1<<nl;
        else cout<<a<<" "<<n-a<<nl;
    }
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
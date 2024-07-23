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

bool isPrime(int n){
    for(int a=2;a<=sqrt(n);a++){
        if(n%a==0)
        return false;
    }
    return true;
}

void solve(){
    int d;cin>>d;
    int p=0,q=0;
    p=1+d;
    while(true){
        if(isPrime(p))
        break;
        p++;
    }
    q=p+d;
    while(true){
        if(isPrime(q))
        break;
        q++;
    }
    cout<<p*q<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
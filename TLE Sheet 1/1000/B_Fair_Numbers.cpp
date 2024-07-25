#include <bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl '\n'
#define int long long int
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool ok(int n){
    int temp=n;
    while(n>0){
        int ld=n%10;
        if(ld==0){
            n/=10;
            continue;
        }
        if(temp%ld!=0)
        {
            return false;
        }
        n/=10;
    }
    return true;
}

void solve(){
    int num;cin>>num;
    while(!ok(num))num++;
    cout<<num<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
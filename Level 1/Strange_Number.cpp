#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);


void solve(){
    ll x,k;
    cin>>x>>k;
    int cnt=0;
    while(x%2==0){
        x/=2;
        cnt++;
    }
    for(int a=3;a<=sqrt(x);a++){
        while(x%a==0){
            x/=a;
            cnt++;
        }
    }
    if(x>1)cnt++;
    // cout<<cnt<<endl; 
    if(cnt>=k)cout<<1<<endl;
    else cout<<0<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
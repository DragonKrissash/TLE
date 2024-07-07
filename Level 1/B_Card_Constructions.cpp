#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool check(ll ht,ll cards){
    return ((3*ht*ht+ht)/2)<=cards;
}

void solve(){
    ll n;cin>>n;
    ll lo=1,hi=(ll)1e9;
    ll ans=n;
    while(hi-lo>1){
        ll mid=lo+(hi-lo)/2;
        if(check(mid,n)){ans=mid;lo=mid;}
        else hi=mid;
    }
    int cnt=0;
    while(n>1){
        ll cards=(3*ans*ans+ans)/2;
        cnt+=n/cards;
        n=n%cards;
        ans--;
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
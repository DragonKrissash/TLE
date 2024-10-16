//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    int g1=0,g2=0;
    // if(n==2){
    //     if(v[0]==v[1])cout<<0<<nl;
    //     else cout<<max(v[0],v[1])<<nl;
    //     return;
    // }
    for(int a=0;a<n;a++){
        if(a&1)g1=__gcd(g1,v[a]);
        else g2=__gcd(g2,v[a]);
    }
    bool isg1=1,isg2=1;
    for(int a=0;a<n;a++){
        if(a&1){
            if(v[a]%g2==0){
                isg2=0;
            }
        }
        else{
            if(v[a]%g1==0){
                isg1=0;
            }
        }
    }
    if(isg1 and isg2){
        cout<<max(g1,g2)<<nl;
    }
    else if(isg1)cout<<g1<<nl;
    else if(isg2)cout<<g2<<nl;
    else cout<<0<<nl;

}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

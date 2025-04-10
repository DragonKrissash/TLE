//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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
#define pb push_back
#define ld long double
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

set<int>primes;

void solve();

void build(){
    vi pri(1e7+5,1);
    pri[0]=0;
    pri[1]=0;
    for(int a=2;a<=1e7;a++){
        if(pri[a]){
            primes.insert(a);
            for(int b=a*a;b<=1e7;b+=a){
                pri[b]=0;
            }
        }
    }
}

signed main(){

    fastio
    int tc;
    build();
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}



void solve(){
    int n;cin>>n;
    int ans=0;
    for(int a:primes){
        if(a<=n){
            ans+=n/a;
        }
        else break;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    int n,l,r;cin>>n>>l>>r;
    vi v(n);
    input(v);
    vi v1,v2;
    int sum=0;
    for(int a=0;a<r;a++){
        v1.pb(v[a]);
    }
    for(int a=l-1;a<n;a++)v2.pb(v[a]);
    sort(all(v1));
    sort(all(v2));
    int sum1=0,sum2=0;
    for(int a=0;a<(r-l+1);a++){
        sum1+=v1[a];
        sum2+=v2[a];
    }
    cout<<min(sum1,sum2)<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

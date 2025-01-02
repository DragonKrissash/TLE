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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,k;cin>>n>>k;
    vector<pii>vp(n);
    for(int a=0;a<n;a++){
        cin>>vp[a].Y>>vp[a].X;
    }
    sort(all(vp));
    // for(auto [k,val]:vp){
    //     cout<<k<<sp<<val<<nl;
    // }
    int cnt=0;
    multiset<int>fin;
    for(int a=0;a<k;a++){
        fin.insert(-1);
    }
    for(int a=0;a<n;a++){
        auto it=fin.upper_bound(vp[a].Y);
        if(it==begin(fin))continue;
        fin.erase(--it);
        fin.insert(vp[a].X);
        cnt++;
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

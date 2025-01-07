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
    int n;cin>>n;
    string kuro,shiro,katie;
    cin>>kuro>>shiro>>katie;
    int kuu=kuro.size(),shi=shiro.size(),kaa=katie.size();
    map<char,int>ku,sh,ka;
    for(auto i:kuro)ku[i]++;
    for(char c:shiro)sh[c]++;
    for(char c:katie)ka[c]++;
    int maxku=0,maxka=0,maxsh=0;
    for(auto [k,v]:ku){
        maxku=max(maxku,ku[k]);
    }
    for(auto [k,v]:sh){
        maxsh=max(maxsh,sh[k]);
    }
    for(auto [k,v]:ka){
        maxka=max(maxka,ka[k]);
    }
    if(n==1 and maxku==kuu)kuu--;
    if(n==1 and maxsh==shi)shi--;
    if(n==1 and maxka==kaa)kaa--;
    maxku=min(maxku+n,kuu);
    maxsh=min(maxsh+n,shi);
    maxka=min(maxka+n,kaa);
    if(maxka>maxku and maxka>maxsh){
        cout<<"Katie\n";
    }
    else if(maxku>maxka and maxku>maxsh){
        cout<<"Kuro"<<nl;
    }
    else if(maxsh>maxka and maxsh>maxku){
        cout<<"Shiro"<<nl;
    }
    else cout<<"Draw"<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

int find(int a,vi &par,vi &rank){
    if(par[a]==a)return a;
    else return par[a]=find(par[a],par,rank);
}

void uni(int a,int b,vi &par,vi &rank){
    a=find(a,par,rank);
    b=find(a,par,rank);
    if(a==b)return;
    if(rank[a]>rank[b]){
        par[b]=a;
        rank[a]+=rank[b];
    }
    else{
        par[a]=b;
        rank[b]+=rank[a];
    }
}

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
    int n,m;cin>>n>>m;
    vi par(n+1),rank(n+1,1);
    for(int a=1;a<=n;a++){
        par[a]=a;
    }
    while(m--){
        
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

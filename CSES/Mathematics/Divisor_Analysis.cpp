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

int p[100001],k[100001];

int expo(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1)ans=ans*a%MOD;
        a=a*a%MOD;
        b=b>>1;
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    for(int a=0;a<n;a++){
        cin>>p[a]>>k[a];
    }
    int numd2=1,numd=1,prod=1,sumd=1;
    for(int a=0;a<n;a++){
        numd=numd*(k[a]+1)%MOD;
        sumd=sumd*(expo(p[a],k[a]+1)-1)%MOD*expo(p[a]-1,MOD-2)%MOD;
        prod=expo(prod,k[a]+1)%MOD*(expo(expo(p[a],k[a]*(k[a]+1)/2),numd2))%MOD;
        numd2=numd2*(k[a]+1)%(MOD-1);
    }
    cout<<numd<<sp<<sumd<<sp<<prod<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

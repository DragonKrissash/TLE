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
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

int arr[100010];

signed main(){

    fastio
    int tc;
    tc=1;
    arr[0]=1;
    arr[1]=1;
    for(int a=2;a<1e5+10;a++)
    arr[a]=((arr[a-1]%MOD)+(arr[a-2]%MOD))%MOD;
    cin>>tc;
    while(tc--){
    solve();
    }
}
int mod_mul(int a,int b,int m){
    return ((a%m)*(b%m))%m;
}

void solve(){
    int n,k;cin>>n>>k;
    int a=1,b=1,t=1;
    n%=MOD;
    while(a%k){
        t++;
        tie(a,b)=make_pair(b,(a+b)%k);
    }
    cout<<(n*t)%MOD<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

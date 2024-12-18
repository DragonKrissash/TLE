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

int mul(int a,int b){
    return (a*b)%MOD;
}

int add(int a,int b){
    return (a+b)%MOD;
}

int sub(int a,int b){
    return (a-b+MOD)%MOD;
}

double expo(double a,int b){
    ld res=1;
    while(b>0){
        if(b&1)res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}

int inv(int a){
    return expo(a,MOD-2);
}

void solve(){
    ld m,n;cin>>m>>n;
    cout<<setprecision(12)<<fixed;
    ld pro=0;
    pro=m;
    // cout<<pro<<nl;
    ld sum=0;
    for(int a=1;a<=m-1;a++){
        // cout<<sum<<sp;
        sum+=expo((m-a)/m,n);
    }
    cout<<pro-sum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
const int MOD = 998244353;
const int N=2e5+1;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vi frl;
void solve();
signed main(){

    fastio
    int tc;
    frl.resize(N);
    frl[0]=1;
    for(int a=1;a<N;a++){
        frl[a]=(frl[a-1]*a)%MOD;
    }
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

int expo(int a,int b){
    int res=1;
    while(b>0){
        if(b&1)res=(res*a)%MOD;
        b>>=1;
        a=(a*a)%MOD;
    }
    return res;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    sort(all(v));
    if(v[n-1]==v[n-2]){
        cout<<frl[n]<<nl;
        return;
    }
    else if(v[n-1]-2>=v[n-2]){
        cout<<0<<nl;
        return;
    }
    else{
        int cnt=count(all(v),v[n-1]-1);
        cout<<(frl[n]-((frl[n]*expo(cnt+1,MOD-2))%MOD)+MOD)%MOD<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

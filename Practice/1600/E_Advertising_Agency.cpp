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
    cin>>tc;
    while(tc--){
    solve();
    }
}

int mul(int a,int b){
    return (a*b)%MOD;
}

int expo(int a,int b){
    int res=1;
    while(b>0){
        if(b&1)res=mul(res,a);
        a=mul(a,a);
        b>>=1;
    }
    return res;
}

int ncr(int a,int b){
    int num=1;
    for(int i=a;i>a-b;i--){
        num=mul(num,i);
    }
    int den=1;
    for(int i=b;i>=1;i--){
        den=mul(den,i);
    }
    return mul(num,expo(den,MOD-2));
}

void solve(){
    int n,k;cin>>n>>k;
    map<int,int>mp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x]++;
    }
    vector<pii> vp;
    for(auto [k,val]:mp){
        vp.pb({k,val});
    }
    int pro=1;
    int ind=vp.size()-1;
    while(k>0){
        // cout<<vp[ind].X<<sp<<vp[ind].Y<<sp<<k<<nl;
        if(vp[ind].Y>k){
            pro=ncr(vp[ind].Y,k);
            k=0;
        }
        else{
            int t=min(vp[ind].Y,k);
            k-=t;
        }
        ind--;
    }
    cout<<pro<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

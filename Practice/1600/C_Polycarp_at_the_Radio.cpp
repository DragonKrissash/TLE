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
    int n,m;cin>>n>>m;
    vi v(n);
    input(v);
    vi fre(m+1);
    vi chn;
    for(int a=0;a<n;a++){
        if(v[a]>m)chn.pb(a);
        else{
            if(fre[v[a]]==n/m)chn.pb(a);
            else fre[v[a]]++;
        }
    }
    int totchn=0;
    for(int a=1;a<=m;a++){
        while(fre[a]<n/m){
            totchn++;
            fre[a]++;
            v[chn.back()]=a;
            chn.pop_back();
        }
    }
    cout<<n/m<<sp<<totchn<<nl;
    for(auto &a:v)cout<<a<<sp;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

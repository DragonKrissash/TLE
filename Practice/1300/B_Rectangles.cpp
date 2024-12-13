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

void solve(){
    int n,m;cin>>n>>m;
    vector<vi> arr(n,vi(m));
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++)
        cin>>arr[a][b];
    }
    vi v1,v2;
    for(int a=0;a<n;a++){
        int cnt1=0,cnt0=0;
        for(int b=0;b<m;b++){
            if(arr[a][b])cnt1++;
            else cnt0++;
        }
        v1.pb(cnt1);
        v1.pb(cnt0);
    }
    for(int a=0;a<m;a++){
        int cnt1=0,cnt0=0;
        for(int b=0;b<n;b++){
            if(arr[b][a])cnt1++;
            else cnt0++;
        }
        v2.pb(cnt1);
        v2.pb(cnt0);
    }
    int sum=0;
    for(auto i:v1){
        // cout<<i<<sp;
        sum+=(1LL<<i)-1;
    }
    // cout<<nl;
    for(auto i:v2){
        // cout<<i<<sp;
        sum+=(1LL<<i)-1-i;
    }
    // cout<<nl;
    cout<<sum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

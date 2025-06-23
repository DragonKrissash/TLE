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
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    int y=0;
    for(int a=1;a<n;a++){
        if(v[a]==v[a-1])y=1;
        if(abs(v[a]-v[a-1])==1)y=1;
    }
    if(y){
        cout<<0<<nl;
        return;
    }
    if(n==2){
        cout<<-1<<nl;
        return;
    }
    if(n==3){
        int mn=min(v[1],v[2]);
        int mx=max(v[2],v[1]);
        if(v[0]<=mx and v[0]>=mn)y=1;
        mn=min(v[0],v[1]);
        mx=max(v[0],v[1]);
        if(v[2]>=mn and v[2]<=mx)y=1;
        if(y){
            cout<<1<<nl;
            return;
        }
        else {
            cout<<-1<<nl;
            return;
        }
    }
    for(int a=0;a<n;a++){
        if(a==0 or a==1){
            int mn=min(v[a+1],v[a+2]);
            int mx=max(v[a+1],v[a+2]);
            if(v[a]<=mx and v[a]>=mn)y=1;
        }
        else if(a==n-1 or a==n-2){
            int mn=min(v[a-1],v[a-2]);
            int mx=max(v[a-1],v[a-2]);
            if(v[a]<=mx and v[a]>=mn)y=1;
        }
        else{
            int mn=min(v[a-1],v[a-2]);
            int mx=max(v[a-1],v[a-2]);
            if(v[a]<=mx and v[a]>=mn)y=1;
            mn=min(v[a+1],v[a+2]);
            mx=max(v[a+1],v[a+2]);
            if(v[a]<=mx and v[a]>=mn)y=1;
        }
    }
    if(y)cout<<1<<nl;
    else cout<<-1<<nl;

}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

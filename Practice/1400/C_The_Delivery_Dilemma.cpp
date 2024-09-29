#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cassert>
#include <array>
#include <string>
#include <cstring>
#include <chrono>
using namespace std;
using namespace std::chrono;

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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

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

bool check(vi &res,vi &self,int time,vi &pre,vi &suf){
    int n=res.size();
    int timeInd=upper_bound(all(res),time)-res.begin();
    // timeInd--;
    if(timeInd==n)return 1;
    if(suf[timeInd]<=time)return 1;
    else return 0;

}

void solve(){
    int n;cin>>n;
    vector<pii>v(n);
    for(int a=0;a<n;a++)cin>>v[a].X;
    repi(0,n-1,1)cin>>v[i].Y;
    sort(all(v),[](pii &a,pii &b){
        return a.X<b.X;
    });
    vi res(n),self(n);
    for(int a=0;a<n;a++){
        res[a]=v[a].X;
        self[a]=v[a].Y;
    }
    vi pre(n,0);
    vi suf(n,0);
    pre[0]=v[0].Y;
    suf[n-1]=v[n-1].Y;
    repi(1,n-1,1){
        pre[i]=pre[i-1]+v[i].Y;
    }
    for(int a=n-2;a>=0;a--){
        suf[a]=suf[a+1]+v[a].Y;
    }
    int l=-1,h=1e9+1;
    while(h-l>1){
        int m=l+(h-l)/2;
        if(check(res,self,m,pre,suf))h=m;
        else l=m;
    }
    // repi(0,n-1,1)
    // cout<<res[i]<<sp;
    // cout<<nl;
    // repi(0,n-1,1)
    // cout<<suf[i]<<sp;
    // cout<<nl;
    cout<<h<<nl;
}   



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis


//template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
//template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
//
//struct starter{
//   high_resolution_clock::time_point t1, t2;
//
//   starter() {
//       ios::sync_with_stdio(0); cin.tie(0);
//       t1 = high_resolution_clock::now();
//   }
//   ~starter() {
//      t2 = high_resolution_clock::now();
//       duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//       cerr <<  time_span.count();
//       }
//} starter_;
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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int check(int num,vi &v){
    int n=v.size();
    vi pri;
    repi(0,n-1,1){
        pri.push_back(v[i]+num*(i+1));
    }
    sort(all(pri));
    // repi(0,n-1,1){
    //     cout<<pri[i]<<sp;
    // }
    int sum=0;
    repi(0,num-1,1){
        sum+=pri[i];
    }
    // cout<<nl<<sum<<nl;
    return sum;
}

void solve(){
    int n,s;
    cin>>n>>s;
    vi v(n);
    repi(0,n-1,1){
        cin>>v[i];
    }
    int l=-1,r=n+1;
    int sum=0;
    int ans=0;
    while(r-l>1){
        int m=l+(r-l)/2;
        sum=check(m,v);
        if(sum<=s)
        {l=m;ans=sum;}
        else r=m;
    }
    cout<<l<<sp<<ans<<nl;
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
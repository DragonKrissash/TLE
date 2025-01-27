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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    // tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    map<int,int>mp;
    for(int a=0;a<n;a++){
        int cnt=(a+1)*(n-a)-1;
        mp[cnt]++;
        if(a!=0){
            int cnt=a*(n-a);
            mp[cnt]+=v[a]-v[a-1]-1;
        }
    }
    while(k--){
        int x;cin>>x;
        if(mp.find(x)==mp.end()){
            cout<<0<<sp;
        }
        else{
            cout<<mp[x]<<sp;
        }
    }
    cout<<nl;
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
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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n);
    repi(0,n-1,1){
        cin>>arr[i];
    }
    vector<vector<int>>v;
    repi(1,m,1){
        int x,y,z;
        cin>>x>>y>>z;
        x--;y--;
        v.push_back({x,y,z});
    }
    vector<int>fre(m+1,0);
    repi(1,k,1){
        int x,y;
        cin>>x>>y;
        x--;y--;
        fre[x]++;
        fre[y+1]--;
    }
    int sum=0;
    vector<int>t(n+1,0);
    repi(0,m-1,1){
        sum+=fre[i];
        v[i][2]*=sum;
        t[v[i][0]]+=v[i][2];
        t[v[i][1]+1]-=v[i][2];
    }
    sum=0;
    repi(0,n-1,1){
        sum+=t[i];
        t[i]=sum;
    }
    repi(0,n-1,1){
        cout<<t[i]+arr[i]<<sp;
    }
    cout<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
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
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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool vis[200100];

void solve(){
    int n,m;cin>>n>>m;
    int k=0;
    for(int a=0;a<n;a++){
        int num;cin>>num;
        vi vec(num);
        input(vec);
        sort(all(vec));
        int mex=0;
        int i=0;
        for(i=0;i<num;i++){
            if(vec[i]==mex)mex++;
            else break;
        }
        int mex2=mex+1;
        for(;i<num;i++){
            if(vec[i]==mex2)mex2++;
        }
        k=max(k,mex2);
    }
    if(k>=m)cout<<k*(m+1)<<nl;
    else cout<<k*k+(m+k)*(m-k+1)/2<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}



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
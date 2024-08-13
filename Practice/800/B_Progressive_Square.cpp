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

void solve(){
    int n,c,d;
    cin>>n>>c>>d;
    vi v(n*n);
    int mini=INT_MAX;
    map<int,int>mp1;
    map<int,int>mp2;
    for(int a=0;a<n*n;a++){
        cin>>v[a];
        mp1[v[a]]++;
        mini=min(mini,v[a]);
    }
    int arr[n][n];
    for(int a=0;a<n;a++){
        arr[a][0]=mini;
        mp2[arr[a][0]]++;
        for(int b=1;b<n;b++){
            arr[a][b]=arr[a][b-1]+d;
            mp2[arr[a][b]]++;
        }
        mini+=c;
    }
    bool y=1;
    for(auto [k,v]:mp1){
        if(v!=mp2[k])
        {
            y=0;break;
        }
    }
    if(y)yes;
    else no;

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
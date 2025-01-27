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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int f(int a,int b){
    if(a>b)return 1;
    if(a==b)return 0;
    if(a<b)return -1;
}

void solve(){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int ans=0;
    if(f(a1,b1) + f(a2,b2) >0)
    ans++;
    if(f(a1,b2) + f(a2,b1) >0)
    ans++;
    if(f(a2,b1) + f(a1,b2) >0)
    ans++;
    if(f(a2,b2) + f(a1,b1) >0)
    ans++;
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}



// template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
// template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

// struct starter{
//    high_resolution_clock::time_point t1, t2;

//    starter() {
//        ios::sync_with_stdio(0); cin.tie(0);
//        t1 = high_resolution_clock::now();
//    }
//    ~starter() {
//        t2 = high_resolution_clock::now();
//        duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//        cerr <<  time_span.count();
//        }
// } starter_;
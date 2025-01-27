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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int dis(int x1,int y1,int x2,int y2){
    return ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for(int a=0;a<n;a++){
        cin>>v[a].X>>v[a].Y;
    }
    int xs,ys,xt,yt;cin>>xs>>ys>>xt>>yt;
    int target=dis(xs,ys,xt,yt);
    int mindis=1e6;
    bool y=1;
    for(int a=0;a<n;a++){
        int ds=dis(v[a].X,v[a].Y,xt,yt);
        if(target>=ds)y=0;
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
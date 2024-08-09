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

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        v.push_back({x,a});
    }
    auto cmp=[](pair<int,int>&p,pair<int,int>&q){
        if(p.X==q.X)return p.Y>q.Y;
        else return p.X>q.X;
    };
    sort(all(v),cmp);
    auto cmp2=[](pair<int,int>&p,pair<int,int>&q){
        if(p.Y==q.Y)return p.X<q.X;
        else return p.Y<q.Y;
    };
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp2)>pq1(cmp2);
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp2)>pq2(cmp2);
    pq1.push(v[0]);
    pq2.push(v[1]);
    for(int a=2;a<n;a++){
        if(pq1.top().Y<v[a].Y)
        pq2.push(v[a]);
        else pq1.push(v[a]);
    }
    cout<<pq1.top().X+pq2.top().X<<nl;
    
    
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
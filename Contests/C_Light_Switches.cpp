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
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    sort(all(v));
    int M=2*k;
    int mx=v[n-1];
    for(auto &x:v){
        int inc=(mx-x)/M;
        x+=inc*M;
    }
    map<int,int>changes;
    for(auto &x:v){
        changes[x]++;
        changes[x+k]--;
        changes[x+2*k]++;
        changes[x+3*k]--;
        changes[x+4*k]++;
        changes[x+5*k]--;
    }
    int ans=-1;
    int cnt=0;
    for(auto [k,v]:changes){
        cnt+=v;
        if(cnt==n){
            ans=k;
            break;
        }
    }
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
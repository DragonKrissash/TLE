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
const int MAX=200007;
int a[MAX],psum[MAX];

int log3(int n){
    int c=0;
    while(n>0){
        c++;n/=3;
    }
    return c;
}

void solve(){
    int l,r;cin>>l>>r;
    cout<<psum[r]-psum[l-1]+a[l]<<nl;
}

signed main(){

    fastio
    psum[0]=0;
    for(int i=1;i<MAX-1;i++)
    {
        a[i]=log3(i);
        psum[i]=psum[i-1]+a[i];
    }
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
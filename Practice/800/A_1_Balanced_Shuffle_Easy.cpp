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

struct bod{
    char c;
    int x;
    int y;
};

void solve(){
    string s;cin>>s;
    int n=s.size();
    vector<bod>v(n);
    v[0].y=0;
    for(int a=0;a<n;a++){
        v[a].c=s[a];
        v[a].x=a;
    }
    for(int a=1;a<n;a++){
        if(v[a-1].c=='(')v[a].y=v[a-1].y+1;
        else v[a].y=v[a-1].y-1;
    }
    sort(all(v),[](bod &a,bod &b){
        if(a.y==b.y)return a.x>b.x;
        else return a.y<b.y;
    });
    for(int a=0;a<n;a++){
        cout<<v[a].c;
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
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
    vector<pair<int,string>>v(n);
    for(int a=0;a<n;a++){
        int x;cin>>x;
        string s;cin>>s;
        v[a]={x,s};
    }
    int min1=INT_MAX;
    int min2=min1;
    int ans=min1;
    for(int a=0;a<n;a++){
        // cout<<v[a].X<<" "<<v[a].Y<<nl;
        if(v[a].Y=="10"){
            min1=min(min1,v[a].X);
        }
        if(v[a].Y=="01"){
            min2=min(min2,v[a].X);
        }
        if(v[a].Y=="11"){
            ans=min(ans,v[a].X);
        }
    }
    ans=min(ans,(min1+min2));
    if(ans==INT_MAX)cout<<-1<<nl;
    else cout<<ans<<nl;
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
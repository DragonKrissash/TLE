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
    int n,k,q;cin>>n>>k>>q;
    vi temp(200001,0);
    vi bt(200001,0);
    for(int a=0;a<n;a++){
        int x,y;cin>>x>>y;
        temp[x]++;
        temp[y+1]--;
    }
    int sum=0;
    for(int a=0;a<200001;a++){
        sum+=temp[a];
        bt[a]=sum;
        if(bt[a]>=k){
            bt[a]=1;
        }
        else bt[a]=0;
    }
    for(int a=1;a<200001;a++){
        bt[a]+=bt[a-1];
    }
    while(q--){
        int x,y;cin>>x>>y;
        int ans=bt[y];
        if(x-1>=0){
            ans-=bt[x-1];
        }
        cout<<ans<<nl;
    }
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
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
    int n,k;cin>>n>>k;
    deque<int>dq(n);
    input(dq);
    while(dq.size()>1 && k){
        int mn=min(dq.front(),dq.back());
        if(k<2*mn){
            dq.front()-=k/2 + k%2;
            dq.back()-=k/2;
            k=0;
        }
        else{
            k-=2*mn;
            dq.front()-=mn;
            dq.back()-=mn;
        }
        if(dq.front()==0)dq.pop_front();
        if(dq.back()==0)dq.pop_back();
    }
    int ans=n-dq.size();
    // cout<<dq.front()<<" "<<k<<sp;
    cout<<ans+(dq.size() && dq.front()<=k)<<nl;
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
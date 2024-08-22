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
    int n;cin>>n;
    vi v(n);input(v);
    if(n==1){
        cout<<0<<nl;
        return;
    }
    vector<int>divs;
    for(int a=1;a<=sqrt(n);a++){
        if(n%a==0){
            divs.push_back(a);
            if(n/a !=a)
            divs.push_back(n/a);
        }
    }
    vi pre(n);
    pre[0]=v[0];
    for(int a=1;a<n;a++){
        pre[a]=pre[a-1]+v[a];
    }
    sort(all(divs));
    // for(int a=0;a<divs.size();a++)
    // cout<<divs[a]<<sp;
    // cout<<nl;
    int ans=INT_MIN;
    for(int a=0;a<divs.size()-1;a++){
        int x=divs[a];
        int maxsum=pre[x-1];
        int minsum=pre[x-1];
        for(int b=2*x-1;b<n;b+=x){
            minsum=min(minsum,pre[b]-pre[b-x]);
            maxsum=max(maxsum,pre[b]-pre[b-x]);
        }
        // cout<<minsum<<sp<<maxsum<<nl;
        ans=max(ans,maxsum-minsum);
        // cout<<ans<<nl;
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
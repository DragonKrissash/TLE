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
#define repi(a,b,c) for(int looper=a;looper<=b;looper+=c)

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,q;cin>>n>>q;
    vi arr(n);input(arr);
    vi pre(n,0);
    for(int a=0;a<q;a++){
        int x,y;cin>>x>>y;
        x--;y--;
        pre[x]++;
        if(y+1<n)
        pre[y+1]--;
    }
    vector<pair<int,int>>vec(n);
    int sum=0;
    for(int a=0;a<n;a++){
        sum+=pre[a];
        pre[a]=sum;
        vec[a]={sum,a};
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    sort(all(arr));
    reverse(all(arr));
    int ans=0;
    vi fin(n,0);
    for(int a=0;a<n;a++){
        ans+=arr[a]*vec[a].first;
        fin[vec[a].second]=arr[a];
    }
    cout<<ans<<nl;

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
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
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
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;
    int x;
    cin >> n >> x;
    int max_s = 0;
    for (int i = 0; i < n; i++) max_s += abs(n -1-i-i);
    if (x % 2 != 0 || x > max_s) {
        cout << "No\n";
        return;
        }
    vi v(n);
    for(int a=0;a<n;a++){
        v[a]=a;
    }
    x=x/2;
    for(int a=0;x>0;a++){
        if(x>=n-1-2*a){
            swap(v[a],v[n-a-1]);
            x-=n-1-2*a;
        }
        else {
            swap(v[a],v[a+x]);
            x=0;
        }
    }
    yes;
    for(int a=0;a<n;a++){
        cout<<v[a]+1<<sp;
    }
    cout<<nl;
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
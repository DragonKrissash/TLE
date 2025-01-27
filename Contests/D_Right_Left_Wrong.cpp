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
    vi v(n);
    input(v);
    string s;cin>>s;
    int l=-1,r=-1;
    vector<int>pre(n);
    pre[0]=v[0];
    for(int a=1;a<n;a++){
        pre[a]=pre[a-1]+v[a];
    }
    int sum=0;
    for(int a=0;a<n;a++){
        if(s[a]=='L' and l==-1){
            l=a;
        }
        if(s[a]=='L' and l!=-1 and l!=a and r>l){
            l=a;
        }
        if(s[a]=='R' and l!=-1){
            r=a;
            if(l==0)sum+=pre[a];
            else {
                sum+=pre[a]-pre[l-1];
            }
        }
    }
    cout<<sum<<nl;
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
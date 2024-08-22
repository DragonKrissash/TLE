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

int mini(int a,int b){
    if(a<b)return a;
    else return b;
}

void solve(){
    int n,k;cin>>n>>k;
    vi v(n);input(v);
    sort(all(v));
    int dif=v[0];
    if(k>=3){cout<<0<<nl;return;}
    for(int a=1;a<n;a++){
        dif=mini(dif,abs(v[a]-v[a-1]));
    }
    if(k==1)cout<<dif<<nl;
    else{
        for(int a=0;a<n;a++){
            for(int b=0;b<a;b++){
                int ele=v[a]-v[b];
                int p=lower_bound(all(v),ele)-v.begin();
                if(p<n)dif=min(dif,v[p]-ele);
                if(p>0)dif=min(dif,ele-v[p-1]);
            }
        }
        cout<<dif<<nl;
    }
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
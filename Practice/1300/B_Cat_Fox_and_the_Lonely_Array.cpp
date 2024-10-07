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

bool check(int num,vi &v){
    vi bits(22,0);
    int n=v.size();
    for(int a=0;a<num;a++){
        int j=0;
        int x=v[a];
        while(x>0){
            if(x%2){
                bits[j]++;
            }
            j++;
            x/=2;
        }
    }
    vi freq=bits;
    for(int a=num;a<n;a++){
        int j=0;
        int x=v[a];
        while(x>0){
            if(x%2)freq[j]++;
            j++;
            x/=2;
        }
        j=0;
        x=v[a-num];
        while(x>0){
            if(x%2)freq[j]--;
            j++;
            x/=2;
        }
        for(int b=0;b<22;b++){
            if(freq[b]>0 and bits[b]==0)return 0;
            if(freq[b]==0 and bits[b]>0)return 0;
        }
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    int l=1,r=n;
    int ans=n;
    // for(int a=0;a<n;a++){
    //     cout<<v[a]<<sp;
    // }
    // cout<<nl;
    while(l<=r){
        int m=l+(r-l)/2;
        if(check(m,v)){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<nl;
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
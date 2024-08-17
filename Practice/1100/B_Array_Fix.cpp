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

// int dp[100][3];

// bool f(vector<int>&v,int i,vector<int>res,int step){
//     // if(dp[i][step]!=-1)return dp[i];
//     if(i==v.size()){
//         return is_sorted(all(res));
//     }
//     bool ans=0;
//     res.push_back(v[i]);
//     ans|=f(v,i+1,res,1);
//     res.pop_back();
//     res.push_back(v[i]/10);
//     res.push_back(v[i]%10);
//     ans|=f(v,i+1,res,2);
//     dp[i][step]=ans;
//     return ans;

// }

// bool f1(vector<int>&v,int i,vector<int>res){
//     bool ans=f(v,i,res,1);
//     ans|=f(v,i,res,2);
//     return ans;
// }

void solve(){
    // memset(dp,-1,sizeof(dp));
    int n;cin>>n;
    vi v(n);input(v);
    vi res;
    res.push_back(v[n-1]);
    for(int a=n-2;a>=0;a--){
        if(v[a]>res.back()){
            res.push_back(v[a]%10);
            res.push_back(v[a]/10);
            
        }
        else res.push_back(v[a]);
    }
    if(is_sorted(res.rbegin(),res.rend()))
    yes;
    else no;
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
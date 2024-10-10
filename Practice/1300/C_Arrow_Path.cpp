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

int dirx[]={1,-1,0,0};
int diry[]={0,0,1,-1};



bool f(int i,int j,int st,vector<string>&s,vector<vi>&vis){
    int n=s[0].size();
    if(i==1 and j==n-1)
    return 1;
    if(i<0 || i>1 || j<0 || j>=n)
    return 0;
    if(vis[i][j])return 0;
    int ans=0;
    vis[i][j]=1;
    if(st==1){
        ans=f(i,j+1,2,s,vis)||f(i,j-1,2,s,vis)||f(i-1,j,2,s,vis)||f(i+1,j,2,s,vis);
    }
    else{
        if(s[i][j]=='>')
        ans=f(i,j+1,1,s,vis);
        else 
        ans=f(i,j-1,1,s,vis);
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    vector<string>s(2);
    cin>>s[0]>>s[1];
    vector<vi>vis(5,vi(n+5,0));
    if(f(0,0,1,s,vis))
    yes;
    else no;
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
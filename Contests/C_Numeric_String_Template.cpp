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

void run(string s,vector<int>&v,int n){
    map<char,int>mp1;
    map<int,char>mp2;
    // cout<<s<<" "<<nl;
    if(s.size()!=n){
        no;
        return;
    }
    for(int a=0;a<n;a++){
        if(mp1.find(s[a])==mp1.end())
        mp1[s[a]]=v[a];
        if(mp2.find(v[a])==mp2.end())
        mp2[v[a]]=s[a];
    }
    for(int a=0;a<n;a++){
        if(mp1[s[a]]!=v[a])
        {
            no;
            return;
        }
        if(mp2[v[a]]!=s[a]){
            no;
            return;
        }
    }
    yes;
    return;
}

void solve(){
    int n;cin>>n;
    vi v(n);input(v);
    int m;cin>>m;
    vector<string>sen(m);
    input(sen);
    for(int a=0;a<m;a++){
        string s=sen[a];
        run(s,v,n);
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
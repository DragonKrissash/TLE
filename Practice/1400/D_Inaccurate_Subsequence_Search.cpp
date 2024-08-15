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

bool check(map<int,int>mp,map<int,int>reqmp,int k){
    int cnt=0;
    for(auto [k,v]:reqmp){
        if(v==mp[k])
        cnt++;
    }
    return cnt>=k;
}

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vi v(n);
    input(v);
    multiset<int>todo,done,extra;
    for(int a=0;a<m;a++){
        int x;cin>>x;
        todo.insert(x);
    }
    for(int a=0;a<m;a++){
        if(todo.find(v[a])!=todo.end()){
            todo.erase(todo.find(v[a]));
            done.insert(v[a]);
        }
        else{
            extra.insert(v[a]);
        }
    }
    int ans=(done.size()>=k);
    for(int a=m;a<n;a++){
        int old=v[a-m];
        if(extra.find(old)!=extra.end()){
            extra.erase(extra.find(old));
        }
        else if(done.find(old)!=done.end()){
            done.erase(done.find(old));
            todo.insert(old);
        }
        if(todo.find(v[a])!=todo.end()){
            todo.erase(todo.find(v[a]));
            done.insert(v[a]);
        }
        else{
            extra.insert(v[a]);
        }
        ans+=(done.size()>=k);
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
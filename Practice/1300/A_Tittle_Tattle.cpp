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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);


int add(int a,int b,int mod){
   int ans=(a%mod + b%mod)%mod;
   if(ans<0){
      ans+=mod;
   }
   return ans;
}

int sub(int a,int b,int mod){
   int ans=(a%mod - b%mod)%mod;
   if(ans<0)ans+=mod;
   return ans;
}

void solve();

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}



vector<list<int>>gr;
int v;

vector<vector<int>>comps;
vector<int>vec;
unordered_set<int>vis;

void add_edge(int s,int d,bool bi=true){
    gr[s].push_back(d);
    if(bi)gr[d].push_back(s);
}
void bfs(int n,vector<int>&comp){
    comp.push_back(n);
    vis.insert(n);
    for(auto neig:gr[n]){
        if(!vis.count(neig)){
            bfs(neig,comp);
        }
    }
}

void build_comp(){
    for(int a=0;a<v;a++){
        for(auto node:gr[a]){
            if(!vis.count(node)){
                vector<int>comp;
                bfs(node,comp);
                comps.push_back(comp);
            }
        }
    }
    // for(auto comp:comps){
    //     for(auto node:comp){
    //         cout<<node<<sp;
    //     }
    //     cout<<nl;
    // }

}

void get_ans(){
    int ans=0;
    for(auto comp:comps){
        int mini=INT_MAX;
        for(auto node:comp){
            mini=min(mini,vec[node]);
        }
        ans+=mini;
    }
    for(int a=0;a<v;a++){
        if(!vis.count(a)){
            ans+=vec[a];
        }
    }
    cout<<ans;
}

void solve(){
    int n,m;cin>>n>>m;
    v=n;
    gr.resize(v,list<int>());
    vec.resize(v,0);
    for(int a=0;a<n;a++){
        cin>>vec[a];
        vec[a];
    }
    // if(m==0){
    //     int sum=0;
    //     for(int a=0;a<v;a++){
    //         sum+=vec[a];
    //     }   
    //     cout<<sum;
    //     return;
    // }
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        add_edge(x,y);
    }
    build_comp();
    get_ans();
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
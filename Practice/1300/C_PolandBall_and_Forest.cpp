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

// vector<int>par;
// vector<int>sz;
// int find(int a){
//     return par[a]=(par[a]==a ? a:find(par[a]));
// }

// void uni(int a,int b){
//     a=find(a);
//     b=find(b);
//     if(a==b)return;
//     if(sz[a]>sz[b]){
//         par[b]=a;
//         sz[a]+=sz[b];
//     }
//     else{
//         par[a]=b;
//         sz[b]+=sz[a];
//     }
    
// }

vector<list<int>>gr;
int v;

void add_ed(int a,int b){
    gr[a].push_back(b);
    gr[b].push_back(a);
}
vector<bool>vis;

void dfs(int a){
    vis[a]=1;
    for(auto node:gr[a]){
        if(!vis[node]){
            dfs(node);
        }
    }
}

void solve(){
    int n;
    cin>>n;
    v=n;
    vis.resize(n+10,0);
    gr.resize(n,list<int>());
    for(int a=0;a<n;a++){
        int x;
        cin>>x;
        x--;
        add_ed(a,x);
    }
    int cnt=0;
    for(int a=0;a<n;a++){
        for(auto node:gr[a]){
            if(!vis[node]){
                cnt++;
                dfs(node);
            }
        }
    }
    cout<<cnt;
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
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
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vector<list<int>>tree(n+1,list<int>());
    int e=n-1;
    while(e--){
        int u,v;cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<bool>vis(n+5,0);
    int u,v;cin>>u>>v;
    char y='a';
    int alice=1;
    int bob=u;
    vis[1]=1;
    vis[u]=1;
    while(true){
        int maxnei=0;
        int maxlen=0;
        bool mov=0;
        for(int nei:tree[alice]){
            if(!vis[nei] and tree[nei].size()>maxlen){
                maxnei=nei;
                maxlen=tree[nei].size();
                mov=1;
                // cout<<"Alice: "<<sp<<nei<<nl;
            }
        }
        if(mov==0){
            y='b';
            break;
        }
        else{
            alice=maxnei;
            vis[alice]=1;
        }
        maxnei=0;
        maxlen=0;
        mov=0;
        for(int nei:tree[bob]){
            if(!vis[nei] and tree[nei].size()>maxlen){
                maxnei=nei;
                maxlen=tree[nei].size();
                mov=1;
            }
        }
        if(mov==0){
            y='a';
            break;
        }
        else{
            bob=maxnei;
            vis[bob]=1;
        }
    }
    if(y=='a'){
        cout<<"Alice\n";
    }else{
        cout<<"Bob\n";
    }
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
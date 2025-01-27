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
#define int long long int
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define vii vector<pair<int,int>>
#define ii pair<int,int>
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

const int INF = 0xFFFFFFFFFFFFFFFLL;

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
    int n,m,h;cin>>n>>m>>h;
    set<int>horse;
    vector<vii> gr(n);
    while(h--){
        int x;cin>>x;
        x--;
        horse.insert(x);
    }
    while(m--){
        int x,y,z;
        cin>>x>>y>>z;
        x--;y--;
        gr[x].push_back({y,z});
        gr[y].push_back({x,z});
    }
    
    auto diks=[&](int src,vi &distWithHorse,vi &distWithoutHorse)->void{
        priority_queue<pair<int,ii>>pq;
        distWithHorse.resize(n,INF);
        distWithoutHorse.resize(n,INF);
        if(horse.count(src)){
            pq.push({0,ii{src,1}});
        }
        else{
            pq.push({0,ii{src,0}});
        }
        while(!pq.empty()){
            auto tp=pq.top();
            pq.pop();
            int d=-tp.X;
            int u=tp.Y.X;
            bool hasHorse=tp.Y.Y;
            if(hasHorse){
                if(distWithHorse[u]<=d){
                    continue;
                }
                distWithHorse[u]=d;
            }
            else{
                if(distWithoutHorse[u]<=d)
                continue;
                distWithoutHorse[u]=d;
            }
            for(auto nei:gr[u]){
                int v=nei.X;
                int wei=nei.Y;
                if(hasHorse){
                    pq.push({-d-(wei/2),{v,1}});
                    continue;
                }
                if(horse.count(v)){
                    pq.push({-d-wei,{v,1}});
                }
                else{
                    pq.push({-d-wei,{v,0}});
                }
            }
        }

    };
    vi d1withHorse,d1withoutHorse;
    vi dnwithHorse,dnwithoutHorse;
    diks(0,d1withHorse,d1withoutHorse);
    diks(n-1,dnwithHorse,dnwithoutHorse);
    int ans=INF;
    for(int a=0;a<n;a++){
        int t1=min(d1withHorse[a],d1withoutHorse[a]);
        int t2=min(dnwithHorse[a],dnwithoutHorse[a]);
        int meettime=max(t1,t2);
        ans=min(ans,meettime);
    }
    if(ans>=INF){
        cout<<-1<<nl;
        return;
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
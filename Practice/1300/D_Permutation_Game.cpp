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

void solve(){
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    pb--;
    ps--;
    vi p(n),arr(n);
    for(int a=0;a<n;a++){
        cin>>p[a];
        p[a]--;
    }
    input(arr);
    int bod=0,sas=0;
    int maxbod=0,maxsas=0;
    int pbini=pb;
    int psini=ps;
    for(int a=k;a>=0;a--){
        int bosum=bod+a*arr[pb];
        maxbod=max(maxbod,bosum);
        bod+=arr[pb];
        int sasum=sas+a*arr[ps];
        maxsas=max(maxsas,sasum);
        sas+=arr[ps];
        if(ps==psini and a!=k){
            ps=psini;
        }
        else
        ps=p[ps];
        if(pb==pbini and a!=k)
        pb=pbini;
        else
        pb=p[pb];
        if(pb==pbini and ps==psini)
        break;
    }
    if(maxbod>maxsas){
        cout<<"Bodya"<<nl;
    }
    else if(maxsas>maxbod){
        cout<<"Sasha"<<nl;
    }
    else cout<<"Draw"<<nl;
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
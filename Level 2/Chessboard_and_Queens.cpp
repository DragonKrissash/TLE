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

int rows[8];
int rd[20];
int ld[20];
char arr[8][8];

int f(int col){
    if(col==8)return 1;
    int ans=0;
    for(int a=0;a<8;a++){
        if(arr[a][col]!='*' and rows[a]==0 and ld[col+a]==0 and rd[7+col-a]==0){
            rows[a]=1;
            ld[col+a]=1;
            rd[7+col-a]=1;
            ans+=f(col+1);
            rows[a]=0;
            ld[col+a]=0;
            rd[7+col-a]=0;
        }
    }
    return ans;
}

void solve(){
    for(int a=0;a<8;a++){
        for(int b=0;b<8;b++){
            cin>>arr[a][b];
        }
    }
    cout<<f(0)<<nl;
}

signed main(){

    fastio
    int tc=1;
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
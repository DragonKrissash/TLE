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

void solve(){
    int n,m;cin>>n>>m;
    vector<string>arr(n);
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    int q;cin>>q;
    int mat[n+1][m+1];
    memset(mat,0,sizeof(mat));
    repi(1,q,1){
        int a,b,c,d;cin>>a>>b>>c>>d;
        a--;b--;c--;d--;
        mat[a][b]++;
        // if(c+1<n and d+1<m)
        mat[a][d+1]--;
        mat[c+1][b]--;
        // mat[c+1][d]--;
        // mat[c][d+1]--;
        mat[c+1][d+1]++;
    }
    for(int a=0;a<m;a++){
        for(int b=1;b<n;b++){
            mat[b][a]+=mat[b-1][a];
        }
    }
    for(int a=0;a<n;a++){
        for(int b=1;b<m;b++){
            mat[a][b]+=mat[a][b-1];
        }
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++)
        {
            if(mat[a][b]%2==0)cout<<arr[a][b]-'0';
            else cout<<((arr[a][b]-'0')^1);
            // cout<<mat[a][b]<<sp;
        }
        cout<<nl;
    }
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
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
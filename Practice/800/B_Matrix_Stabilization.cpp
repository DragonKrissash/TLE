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

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
int n,m;
bool isVal(int a,int b){
    if(a>=0 && a<n){
        if(b>=0 && b<m)
        return true;
    }
    return false;
}

void chng(int &a){}
// int ele=0;
//             if(isVal(a-1,b))
//             ele=max(ele,arr[a-1][b]);
//             if(isVal(a+1,b))
//             ele=max(ele,arr[a+1][b]);
//             if(isVal(a,b-1))
//             ele=max(ele,arr[a][b-1]);
//             if(isVal(a,b+1))
//             ele=max(ele,arr[a][b+1]);
//             arr[a][b]=ele;
void solve(){
    cin>>n>>m;
    int arr[n][m];
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++)
        cin>>arr[a][b];
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            int ele=INT_MIN;
            if(isVal(a-1,b))
            ele=max(ele,arr[a-1][b]);
            if(isVal(a+1,b))
            ele=max(ele,arr[a+1][b]);
            if(isVal(a,b-1))
            ele=max(ele,arr[a][b-1]);
            if(isVal(a,b+1))
            ele=max(ele,arr[a][b+1]);
            if(ele<arr[a][b] and ele!=INT_MIN)
            arr[a][b]=ele;
        }
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++)
        cout<<arr[a][b]<<" ";
        cout<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}



// template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
// template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

// struct starter{
//    high_resolution_clock::time_point t1, t2;

//    starter() {
//        ios::sync_with_stdio(0); cin.tie(0);
//        t1 = high_resolution_clock::now();
//    }
//    ~starter() {
//        t2 = high_resolution_clock::now();
//        duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//        cerr <<  time_span.count();
//        }
// } starter_;
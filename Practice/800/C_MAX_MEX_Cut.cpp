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

int sof(string s){
    int ans=count(all(s),'0');
    int n=s.size();
    bool i=0,j=0;
    for(int a=0;a<n;a++){
        if(s[a]=='1')i=1;
        if(s[a]=='0')j=1;
        if(i&&j){
            ans++;
            i=0;j=0;
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    string s,t;cin>>s>>t;
    string sen="";
    int ans=0;
    for(int a=0;a<n;a++){
        if(s[a]!=t[a]){
            ans+=2+sof(sen);
            sen="";
        }
        else sen+=s[a];
    }    
    cout<<ans+sof(sen)<<nl;
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
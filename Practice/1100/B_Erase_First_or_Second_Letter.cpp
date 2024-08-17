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
// set<string>st;

// void genMap(string s){
//     if(st.find(s)!=st.end())
//     return;
//     if(s=="")return;
//     st.insert(s);
//     if(s.size()==1)
//     return;
//     // cout<<"S1: "<<s1<<"  S2: "<<s2<<nl;
//     genMap(s.substr(1));
//     genMap(s[0]+s.substr(2));

// }

void solve(){
    int n;cin>>n;
    // st.clear();
    string s;cin>>s;
    // genMap(s);
    set<char>st;
    int ans=0;
    for(int a=0;a<n;a++){
        st.insert(s[a]);
        ans+=st.size();
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
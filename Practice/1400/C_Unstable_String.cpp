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

bool isGood(vi &one,vi &zero){
    if(one[0] and one[1])return 0;
    if(zero[0] and zero[1])return 0;
    if(one[0] and zero[0])return 0;
    if(one[1] and zero[1])return 0;
    return 1;
}

void solve(){
    string s;cin>>s;
    int l=0,r=0;
    vi one(2,0);
    vi zero(2,0);
    int ans=0;
    while(r<s.size()){
        if(s[r]=='1'){
            one[r&1]++;
        }
        if(s[r]=='0'){
            zero[r&1]++;
        }
        while(!isGood(one,zero)){
            if(s[l]=='1')one[l&1]--;
            if(s[l]=='0')zero[l&1]--;
            l++;
        }
        ans+=(r-l+1);
        r++;
    }
    // if(l<s.size()-1){
    //     while(l<s.size()){
    //         if(s[l]=='1'){
    //             one[l&1]--;
    //         }
    //         if(s[l]=='0'){
    //             zero[l&1]--;
    //         }
    //         l++;
    //         if(isGood(one,zero)){
    //             ans+=r-l+1;
    //         }
    //         else break;
    //     }
    // }
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
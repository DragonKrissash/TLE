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
    string s;cin>>s;
    int n=s.size();
    int maxlen=0;
    if(n==1){
        if(s[0]=='1')cout<<1<<nl;
        else cout<<0<<nl;
        return;
    }
    if(s[0]=='1' and s[n-1]=='1'){
        int cnt=0;
        int i=0,j=n-1;
        while(s[i]=='1'){
            cnt++;i++;
        }
        while(j>i and s[j]=='1'){
            cnt++;j--;
        }
        maxlen=max(maxlen,cnt);
    }
    if(maxlen==n){
        cout<<n*n<<nl;
        return;
    }
    int l=-1,r=-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' and l==-1){
            l=i;r=i;cnt++;
        }
        else if(s[i]=='1' and l!=-1){
            r++;
            cnt++;
        }
        else{
            maxlen=max(maxlen,cnt);
            l=-1;r=-1;cnt=0;
        }
    }
    maxlen=max(maxlen,cnt);
    int num1=(maxlen+1)/2;
    int num2=(maxlen+2)/2;
    cout<<num1*num2<<nl;
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
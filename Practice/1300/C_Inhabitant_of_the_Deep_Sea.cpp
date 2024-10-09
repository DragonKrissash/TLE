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
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    int sum=accumulate(all(v),0LL);
    if(sum<=k){
        cout<<n<<nl;
        return;
    }
    int i=0,j=n-1;
    int cnt=0;
    while(i<=j and k>0){
        int mini=min(v[i],v[j]);
        if(2*mini<=k){
            k-=2*mini;
            v[i]-=mini;
            v[j]-=mini;
            if(v[i]==0)i++,cnt++;
            if(v[j]==0)j--,cnt++;
        }
        else{
            if(mini>k)break;
            else{
                mini=(mini+1)/2;
                v[i]-=mini;
                if(v[i]==0)cnt++,i++;
                k-=mini;
                if(k<=0)break;
                v[j]-=mini;
                if(v[j]==0)cnt++,j--;
                k-=mini;
                if(k<=0)break;
            }
        }
    }
    cout<<cnt<<nl;
    
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
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

const int N=2e5+2;
int n,k,dp[N],a[N];

int f(int rem){
    int &ans=dp[rem];
    if(~ans)return ans;
    ans=0;
    for(int i=1;i<=n;i++){
        if(rem-a[i]>=0)
        {
            int opp=f(rem-a[i]);
            ans=ans|(opp==0);   
        }
    }
    return ans;
}

void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    memset(dp,-1,sizeof(dp));
    if(n==1){
        if(k/a[1] %2==1)cout<<"First"<<nl;
        else cout<<"Second"<<nl;
        return;
    }
    cout<<(f(k)? "First":"Second")<<nl;
}

signed main(){

    fastio
    int tc=1;
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
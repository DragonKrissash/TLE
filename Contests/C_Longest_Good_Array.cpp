#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>

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


int add(int a,int b,int mod){
   int ans=(a%mod + b%mod)%mod;
   if(ans<0){
      ans+=mod;
   }
   return ans;
}

int sub(int a,int b,int mod){
   int ans=(a%mod - b%mod)%mod;
   if(ans<0)ans+=mod;
   return ans;
}

void solve();

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int l,r;cin>>l>>r;
    vi v;
    int cnt=1;
    for(int a=l;a<=r;){
        v.push_back(a);
        a+=cnt;
        cnt++;
    }
    cout<<v.size()<<nl;
}


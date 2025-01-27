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
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    int sum=0;
    int cnt=0;
    for(int a=0;a<n;a++){
        if(v[a]>=k){
            sum+=v[a];
        }
        else if(v[a]==0){
            if(sum>0){
                sum--;
                cnt++;
            }
        }
    }
    cout<<cnt<<nl;
}



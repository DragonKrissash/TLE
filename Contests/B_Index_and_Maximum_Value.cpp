#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

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
    int n,m;cin>>n>>m;
    vi v(n);
    int maxi=0;
    repi(0,n-1,1){
        cin>>v[i];
        maxi=max(maxi,v[i]);
    }
    repi(1,m,1){
        char c;int l,r;cin>>c>>l>>r;
        if(maxi>r || maxi<l)cout<<maxi<<sp;
        else {
            if(c=='+')maxi++,cout<<maxi<<sp;
            else maxi--,cout<<maxi<<sp;
        }
    }
    cout<<nl;
}


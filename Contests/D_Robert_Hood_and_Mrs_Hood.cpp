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
const auto start_time = std::chrono::high_resolution_clock::now();
void kkk(){
    auto end_time = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end_time-start_time;
    cerr<<"Time Taken : "<<diff.count()<<"\n";
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
    int n,d,k;cin>>n>>d>>k;
    vector<pair<int,int>>vp(k);
    for(auto &x:vp){
        cin>>x.X>>x.Y;
    }
    sort(all(vp));
    multiset<int>curr;
    int mnVal=INT_MAX,mnInd=-1,mxVal=-1,mxInd=-1;
    for(int ind=0,day=1;day+d-1<=n;day++){
         while(ind<k and vp[ind].X<=day+d-1){
            curr.insert(vp[ind].Y);
            ind++;
         }   
         while(!curr.empty() and *curr.begin()<day){
            curr.erase(curr.begin());
         }
         int sz=curr.size();
         if(sz>mxVal){
            mxVal=sz;
            mxInd=day;
         }
         if(sz<mnVal){
            mnVal=sz;
            mnInd=day;
         }
    }
    cout<<mxInd<<sp<<mnInd<<nl;
    kkk();
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

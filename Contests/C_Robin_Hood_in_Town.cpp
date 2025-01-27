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
    int n;cin>>n;
    vi v(n);
    double sum=0;
    int maxi=0;
    for(int a=0;a<n;a++){
        cin>>v[a];
        sum+=v[a];
        maxi=max(maxi,v[a]);
    }
    if(n==1){
        cout<<-1<<nl;
        return; 
    }
    
    double avg=sum/n;
    sort(all(v));
    avg/=2.0;
    double req=v[n/2];
    if(n==2){
        cout<<-1<<nl;
        return;
    }
    if(avg>req)cout<<0<<nl;
    else{
        req+=0.0000001;
        int x=ceil((req*2*n)-sum);
        cout<<x<<nl;
    }
}


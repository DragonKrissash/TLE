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
    string s;cin>>s;
    int root=sqrt(n);
    if(root*root !=n)cout<<"No"<<nl;
    else{
        string t="";
        for(int a=0;a<root;a++){
            for(int b=0;b<root;b++){
                if(a==0||b==0||a==root-1||b==root-1)
                t=t+'1';
                else t+='0';
            }
        }
        if(t==s)
        cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
}


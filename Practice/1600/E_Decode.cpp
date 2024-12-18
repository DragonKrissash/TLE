//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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
#define sm(v) accumulate(v.begin(),v.end(),0LL)
#define pb push_back
#define ld long double
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

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

int add(int a,int b){
    return (a+b)%MOD;
}

int mul(int a,int b){
    return (a*b)%MOD;
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    int sum=0;
    vi pre(n);
    for(int a=0;a<n;a++){
        if(s[a]=='1'){
            sum+=1;
        }
        else sum-=1;
        pre[a]=sum;
    }
    int i=0,j=0;
    int cnt=0;
    map<int,int>mp;
    // mp[0]=-1;
    for(int a=0;a<n;a++){
        // cout<<pre[a]<<sp;
        if(pre[a]==0){
            cnt=add(cnt,n-a);
        }
        if(mp.count(-pre[a])){
            int num=mul(mp[-pre[a]],n-a);
            cnt=add(cnt,num);
        }
        mp[-pre[a]]=add(mp[-pre[a]],a+2);
    }
    
    // for(int i:pre)cout<<i<<sp;
    // cout<<nl;
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

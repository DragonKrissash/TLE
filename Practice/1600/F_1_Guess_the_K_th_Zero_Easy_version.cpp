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
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int que(int l,int r){
    cout<<"? "<<l<<sp<<r<<endl;
    int x;cin>>x;
    return x;
}

void cal(int l,int r,int k){
    if(l==r){
        cout<<"! "<<l<<endl;
        return;
    }
    int m=(l+r)/2;
    int sum=que(l,m);
    if(m-l+1-sum>=k){
        cal(l,m,k);
    }
    else cal(m+1,r,k-(m-l+1)+sum);
}

void solve(){
    int n,t;cin>>n>>t;
    int k;cin>>k;
    int l=1,r=n;
    int ans;
    cal(1,n,k);
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

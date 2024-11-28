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

int right(int l,int r){
    int piv=l-1;
    int ans=r;
    while(l<=r){
        int m=(l+r)/2;
        if(que(piv,m)==piv){ans=m;r=m-1;}
        else l=m+1;
    }
    return ans;
}

int left(int l,int r){
    int piv=r+1;
    int ans=l;
    while(l<=r){
        int m=(l+r)/2;
        if(que(m,piv)==piv){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    int piv=que(1,n);
    if(piv==1)piv=right(piv+1,n);
    else if(que(1,piv)==piv)piv=left(1,piv-1);
    else piv=right(piv+1,n);
    cout<<"! "<<piv<<endl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,x;
    cin>>n>>x;
    vi v(n);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    sort(all(v));
    for(int a=1;a<n;a++){
        v[a]+=v[a-1];
    }
    // for(int a=0;a<n;a++){
    //     cout<<v[a]<<sp;
    // }
    // cout<<nl;
    int rem=0;
    int sum=0;
    for(int a=n-1;a>=0;a--){
        if(v[a]>x)continue;
        int nx=((x-v[a])/(a+1))+1;
        int t=nx-rem;
        rem+=t;
        sum+=t*(a+1);
    }
    cout<<sum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int add(int a,int b){
    return ((a%MOD)+(b%MOD))%MOD;
}

void solve(){
    int n,tar;cin>>n>>tar;
    vi v(n);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    vi next(tar+1);
    next[0]=1;
    for(int a=n-1;a>=0;a--){
        vi cur(tar+1);
        cur[0]=1;
        for(int sum=1;sum<=tar;sum++){
            int skip=next[sum];
            int pick=0;
            if(v[a]<=sum){
                pick=cur[sum-v[a]];
            }
            cur[sum]=add(pick,skip);
        }
        next=cur;
    }
    cout<<next[tar]<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

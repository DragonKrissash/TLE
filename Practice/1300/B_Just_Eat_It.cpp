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
    int n;cin>>n;
    vi v(n);
    input(v);
    int tot=sm(v);
    bool y=1;
    int sum=0,maxsum=0;
    int l=0,r=0;
    for(int a=0;a<n;a++){
        if(a==n-1 and l==0){
            maxsum=max(maxsum,sum);
            sum-=v[0];
            sum+=v[n-1];
            maxsum=max(maxsum,sum);
            break;
        }
        sum+=v[a];
        if(maxsum<sum){
            maxsum=sum;
            r=a;
        }
        if(sum<=0){
            sum=0;
            l=a;
        }
        if(v[a]<0)y=0;
    }
    // cout<<l<<sp<<r<<nl;
    if(tot>maxsum)yes;
    else no;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

int f(int x,vi &v,int k,int sum){
    if(sum-x<=k)return 1;
    int n=v.size();
    for(int a=v.size()-1;a>=max(1LL,n-x);a--){
        sum-=v[a];
        int opr=x-(v.size()-a);
        int temp=sum-v[0]+(v[0]-opr)*(v.size()-a+1);
        if(temp<=k)return 1;
    }
    return 0;
}

void solve(){
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    int sum=sm(v);
    sort(all(v));
    int l=0,r=1e10;
    int ans=1e9;
    while(l<=r){
        int m=(l+r)/2;
        if(f(m,v,k,sum)){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<nl;
    
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

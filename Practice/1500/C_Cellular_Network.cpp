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

bool f(int dis,vi &v,vi &vm){
    int n=v.size();
    int m=vm.size();
    int l=vm[0]-dis,r=vm[0]+dis;
    int i=0,j=0;
    while(i<n and j<m){
        // cout<<l<<sp<<r<<nl;
        if(l<=v[i] and v[i]<=r){
            i++;
        }
        else{
            j++;
            if(j>=m)return 0;
            l=vm[j]-dis;
            r=vm[j]+dis;
        }
    }
    // cout<<nl;
    // cout<<i<<nl;
    return i>=n;
}

void solve(){
    int n,m;cin>>n>>m;
    vi v(n),vm(m);
    input(v);
    input(vm);
    int l=0,r=2e9;
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(f(mid,v,vm)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

void solve(){
    int n,k,x;cin>>n>>k>>x;
    vi v(n);
    input(v);
    sort(all(v));
    int cnt=1;
    vi dif;
    for(int a=0;a<n-1;a++){
        if(v[a]+x>=v[a+1]){
            continue;
        }
        else{
            dif.pb(v[a+1]-v[a]);
            cnt++;
        }
    }
    sort(all(dif));
    int cnt2=0;
    for(int a=0;a<dif.size() and k>0;a++){
        int req=dif[a]/x;
        if(dif[a]%x ==0)req--;
        if(req<=k){
            cnt2++;
            k-=req;
        }
        else break;
    }
    cout<<cnt-cnt2<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis
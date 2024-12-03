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
    int n,k;cin>>n>>k;
    int cnt=0,l=0;
    vi v(n);
    input(v);
    int maxcnt=0;
    for(int a=0;a<k;a++){
        if(a!=0 and a!=k-1 and v[a-1]<v[a] and v[a]>v[a+1]){
            // if(l==-1)l=a;
            cnt++;
        }
    }
    // cout<<cnt<<nl;
    maxcnt=cnt;
    for(int a=k;a<n;a++){
        if(v[a-k+1]>v[a-k] and v[a-k+1]>v[a-k+2]){
            cnt--;
        }
        if(v[a-1]>v[a-2] and v[a-1]>v[a]){
            cnt++;
        }
        if(cnt>maxcnt){
            // cout<<l<<sp;
            maxcnt=cnt;
            l=a-k+1;
        }
    }
    // cout<<nl;
    cout<<maxcnt+1<<sp<<l+1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

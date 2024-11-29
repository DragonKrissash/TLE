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

bool f(int num,vi &ai,vi &bi){
    int n=ai.size();
    int cnt=0;
    for(int a=1;a<=n-1;a++){
        if(cnt<=bi[a] and ai[a]>=(num-1-cnt))
        cnt++;
        if(cnt==num)break;
    }
    return cnt==num;
}

void solve(){
    int n;cin>>n;
    vi ai(n+1),bi(n+1);
    for(int a=1;a<=n;a++){
        cin>>ai[a]>>bi[a];
    }
    int l=1,r=n+1;
    int ans=0;
    while(r-l>1){
        int m=(l+r)/2;
        if(f(m,ai,bi)){
            ans=m;
            l=m;
        }
        else r=m;
    }
    cout<<l<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

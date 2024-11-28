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

int que(int l,int r,vi &v){
    cout<<"? "<<r-l+1<<sp;
    // cout<<"L "<<l<<" R "<<r<<endl;
    for(int a=l;a<=r;a++)
    cout<<a<<sp;
    cout<<endl;
    int x;cin>>x;
    return x;
}

void solve(){
    int n;cin>>n;
    vi v(n+1);
    for(int a=1;a<=n;a++)cin>>v[a];
    int l=1,r=n;
    int ans;
    vi pre(n+1);
    pre[0]=v[0];
    for(int a=1;a<=n;a++)
    pre[a]=pre[a-1]+v[a];
    while(l<=r){
        int m=(l+r)/2;
        int sum=que(l,m,v);
        int orsum=pre[m]-pre[l-1];
        // cout<<"SUM "<<sum<<" ORSUM "<<orsum<<nl;
        if(sum>orsum){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<"! "<<ans<<endl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

bool f(int ind,vector<pii> &vp,vi &que,int n){
    vi v(n,0);
    for(int a=0;a<=ind;a++){
        v[que[a]]=1;
    }
    for(int a=1;a<n;a++){
        v[a]=v[a]+v[a-1];
    }
    for(int a=0;a<vp.size();a++){
        int rsum=v[vp[a].Y];
        int lsum=(vp[a].X >0)?v[vp[a].X-1]:0;
        if(rsum-lsum > (vp[a].Y-vp[a].X+1)/2)
        return 1;
    }
    return 0;
}

void solve(){
    int n,m;cin>>n>>m;
    vector<pii>vp(m);
    for(int a=0;a<m;a++){
        cin>>vp[a].X>>vp[a].Y;
        vp[a].X--;
        vp[a].Y--;
    }   
    int q;cin>>q;
    vi que(q);
    for(int a=0;a<q;a++){
        cin>>que[a];
        que[a]--;
    }
    int l=0,r=q-1;
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(f(mid,vp,que,n)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    ans=(ans==-1)? -1:ans+1;
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

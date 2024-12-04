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

int f(int m,vector<pair<int,pii>>vpp,int k){
    int sum=0;
    int n=vpp.size();
    int ind=0;
    vector<pii>vp;
    for(int a=0;a<n;a++){
        if(vpp[a].X<m){
            vp.pb({vpp[a].X,vpp[a].Y.Y});
        }
        else break;
    }
    sort(all(vp),[&](pii &p, pii&q){
        return p.Y<q.Y;
    });   
    for(int a=n-1;a>=0;a--){
        if(vpp[a].X>m){
            int req=vpp[a].X-m;
            while(req>0){
                if(ind>=vp.size())
                return 0;
                int avai=min(req,m-vp[ind].X);
                sum+=avai*(vpp[a].Y.X+vp[ind].Y);
                vp[ind].X+=avai;
                vpp[a].X-=avai;
                req-=avai;
                if(vp[ind].X==m)
                ind++;
            }
        }
    }
    return sum<=k;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,pii>>vpp(n);
    for(int a=0;a<n;a++){
        cin>>vpp[a].X>>vpp[a].Y.X>>vpp[a].Y.Y;
    }
    int ans=0;
    sort(all(vpp));
    int l=vpp[0].X,r=vpp.back().X;
    while(l<=r){
        int m=(l+r)/2;
        if(f(m,vpp,k)){
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

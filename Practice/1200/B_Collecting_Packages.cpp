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
    vector<pii>vp(n);
    for(int a=0;a<n;a++){
        int x,y;cin>>x>>y;
        vp[a]={x,y};
    }
    sort(all(vp));
    for(int a=1;a<n;a++){
        if(vp[a].Y<vp[a-1].Y){
            no;return;
        }
    }
    int l=0,r=0;
    string ans="";
    for(int i=0;i<n;i++){
        if(vp[i].X>l){
            for(int a=l;a<vp[i].X;a++)
            ans=ans+"R";
            l=vp[i].X;
        }
        if(vp[i].Y>r){
            for(int a=r;a<vp[i].Y;a++)
            ans=ans+"U";
            r=vp[i].Y;
        }
    }
    yes;
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

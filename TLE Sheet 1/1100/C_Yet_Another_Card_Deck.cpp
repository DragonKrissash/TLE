//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,q;
    cin>>n>>q;
    map<int,int>mp;
    vector<pii>vp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        if(mp.find(x)==mp.end()){
            mp[x]=a+1;
            vp.push_back({x,a+1});
        }
    }
    while(q--){
        int x;cin>>x;
        int ind=mp[x];
        mp[x]=1;
        cout<<ind<<sp;
        for(int a=0;a<vp.size();a++){
            if(vp[a].Y<ind){
                vp[a].Y++;
                mp[vp[a].X]=vp[a].Y;
            }
            else if(vp[a].Y==ind)vp[a].Y=1;
        }
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

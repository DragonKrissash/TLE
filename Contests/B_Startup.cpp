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
    int n,k;cin>>n>>k;
    map<int,int>mp;
    int totsum=0;
    for(int a=0;a<k;a++){
        int x,y;cin>>x>>y;
        mp[x]+=y;
        totsum+=y;
    }
    if(n>=mp.size()){
        cout<<totsum<<nl;
        return;
    }
    vector<pii>vp;
    for(auto [k,v]:mp){
        vp.push_back({v,k});
    }
    sort(all(vp));
    int sum=0;
    int ind=vp.size()-1;
    while(n>0){
        sum+=vp[ind].X;
        n--;
        ind--;
    }
    cout<<sum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

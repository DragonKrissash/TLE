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
#define ld long double
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
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mp[x]++;
    }
    if(k==0){
        cout<<mp.size()<<nl;
    }
    else{
        vector<pii>vp;
        for(auto [k,val]:mp){
            vp.pb({val,k});
            // cout<<val<<sp<<k<<nl;
        }
        sort(all(vp));
        int cnt=vp.size();
        for(int a=0;a<vp.size();a++){
            if(vp[a].X<=k){
                k-=vp[a].X;
                cnt--;
            }
            else{
                break;
            }
        }
        if(cnt==0)cout<<1<<nl;
        else
        cout<<cnt<<nl;
        // cout<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

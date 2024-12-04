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
    int n,k;cin>>n>>k;
    vector<pii>vp;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        vp.pb({x,a});
    }
    sort(all(vp));
    for(int a=0;a<n;a++){
        int tar=k-vp[a].X;
        int i=a+1,j=n-1;
        while(i<j){
            int sum=vp[i].X+vp[j].X;
            if(sum==tar){
                cout<<vp[a].Y+1<<sp<<vp[i].Y+1<<sp<<vp[j].Y+1<<nl;
                return;
            }
            else if(sum<tar)i++;
            else j--;
        }
    }
    cout<<"IMPOSSIBLE"<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

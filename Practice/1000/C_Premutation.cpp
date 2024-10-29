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
    vector<vi>v(n,vi(n-1));
    map<int,int>mp;
    for(int a=0;a<n;a++){
        for(int b=0;b<n-1;b++){
            cin>>v[a][b];
            if(b==0)mp[v[a][b]]++;
        }
    }
    int start=-1,val=-1;
    for(auto [k,vl]:mp){
        if(vl>val){
            val=vl;
            start=k;
        }
    }
    for(int a=0;a<n;a++){
        if(v[a][0]!=start){
            cout<<start<<sp;
            for(int b=0;b<n-1;b++){
                cout<<v[a][b]<<sp;
            }
            cout<<nl;
            return;
        }
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

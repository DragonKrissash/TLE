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
    int n;cin>>n;
    vi v(n);
    input(v);
    map<int,int>mp;
    int l=0,r=0,st=0,en=0;
    for(int a=0;a<n;a++){
        mp[v[a]]++;
    }
    bool y=1;
    for(auto [k,val]:mp){
        if(val==1){
            y=0;
            break;
        }
    }
    if(y){
        cout<<0<<nl;
        return;
    }
    int dis=0,mdis=0;
    for(int a=0;a<n;a++){
        if(mp[v[a]]==1){
            dis++;
            if(mdis<dis){
                st=l;
                en=a;
                mdis=dis;
            }
        }
        else{
            dis=0;
            l=a+1;
        }
    }
    cout<<st+1<<sp<<en+1<<nl;

}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

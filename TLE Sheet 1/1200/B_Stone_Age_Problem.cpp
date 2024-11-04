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
    int n,q;cin>>n>>q;
    map<int,int>mp;
    int sum=0;
    for(int a=1;a<=n;a++){
        int x;cin>>x;
        sum+=x;
        mp[a]=x;
    }
    int totx=-1;
    for(int a=0;a<q;a++){
        int ch;cin>>ch;
        if(ch==1){
            int x,y;
            cin>>x>>y;
            if(mp.count(x)){
                sum-=mp[x];
            }
            else{
                sum-=totx;
            }
            mp[x]=y;
            sum+=y;
            cout<<sum<<nl;
        }
        else{
            int x;cin>>x;
            mp.clear();
            totx=x;
            sum=x*n;
            cout<<sum<<nl;
        }
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

vi las(200005);

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size();
    // vi las(m+1);
    for(int a=n-1,b=m-1;a>=0,b>=0;){
        if(s[a]==t[b]){
            las[b]=a;
            b--;
        }
        a--;
    }
    las[m]=n;
    int ans=las[0];
    for(int a=0,b=0;a<n,b<m;){
        if(s[a]==t[b]){
            ans=max(ans,las[b+1]-a-1);
            b++;
        }
        a++;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

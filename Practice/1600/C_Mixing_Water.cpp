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
    cin>>tc;
    while(tc--){
    solve();
    }
}


void solve(){
    int h,c,t;cin>>h>>c>>t;
    if(t<=(h+c)/2){
        cout<<2<<nl;
    }
    else{
        int a=h-t;
        int b=2*t-h-c;
        int k=2*(a/b)+1;
        int val1=abs(k/2*c+(k+1)/2*h-t*k);
        int val2=abs((k+2)/2*c+(k+3)/2*h-t*(k+2));
        int ans=(val1 * (k + 2) <= val2 * k) ? k : (k + 2);
        cout<<ans<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

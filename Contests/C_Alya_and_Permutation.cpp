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
    if(n&1){
        vi ans;
        vi v(n+1,0);
        v[1]=1;
        v[3]=1;
        v[n-1]=1;
        v[n]=1;
        cout<<n<<nl;
        for(int a=1;a<=n;a++){
            if(v[a]==0)cout<<a<<sp;
        }
        cout<<1<<sp<<3<<sp<<n-1<<sp<<n<<nl;
    }
    else{
        vi v(n+1);
        if(n==6){
            cout<<7<<nl;
            cout<<1<<sp<<2<<sp<<4<<sp<<6<<sp<<5<<sp<<3<<nl;
            return;
        }
        int l=0;
        while(n>>l)l++;
        cout<<(1<<l)-1<<nl;
        int t=n;
        n=(1<<(l-1));
        v[1]=1;
        v[3]=1;
        v[n-2]=1;
        v[n-1]=1;
        v[n]=1;
        for(int a=1;a<=t;a++){
            if(v[a]==0)cout<<a<<sp;
        }
        cout<<1<<sp<<3<<sp<<n-2<<sp<<n-1<<sp<<n<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

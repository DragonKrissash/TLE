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
    int n;cin>>n;
    string t,s;cin>>t>>s;
    deque<int>dq;
    repi(1,n,1){
        dq.pb(i);
    }
    vi v;
    repi(0,n-1,1){
        int ind=n-i-1;
        int x;
        if((i&1)==0){
            int j=dq.front();
            dq.pop_front();
            x=(t[j-1]-'0')^1;
        }
        else{
            int j=dq.back();
            dq.pop_back();
            x=t[j-1]-'0';
        }
        if(x==(s[ind]-'0')){
            v.pb(ind+1);
        }
        else {
            v.pb(1);
            v.pb(ind+1);
        }
    }
    cout<<v.size()<<sp;
    for(int i:v)cout<<i<<sp;cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    int n,x;cin>>n>>x;
    if(n==1){
        cout<<x<<nl;
        return;
    }
    vi v;
    int temp=0;
    for(int a=0;a<=x;a++){
        int num=a;
        for(int i=0;i<31;i++){
            if(((num>>i)&1)==1 and ((x>>i)&1)==0){
                // cout<<"NUM: "<<a<<sp<<num<<nl;
                num^=(1LL<<i);
            }
        }
        v.pb(num);
        temp|=num;
        if(v.size()==n)break;
    }
    if(temp!=x){
        v.pop_back();
        v.pb(x);
    }
    int ind=0;
    while(v.size()<n){
        v.pb(v[ind]);
        ind++;
    }
    // cout<<x<<nl;
    for(int a:v)cout<<a<<sp;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

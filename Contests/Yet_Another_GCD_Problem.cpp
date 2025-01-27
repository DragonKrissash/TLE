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
void sieve();

vi p;

signed main(){

    fastio
    sieve();
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void sieve(){
    vector<bool> isPrime(2e6+1,1);
    isPrime[1]=0;
    for(int a=2;a<=2e6;a++){
        if(isPrime[a]){
            p.pb(a);
            for(int b=a*a;b<=1e5;b+=a){
                isPrime[b]=0;
            }
        }
    }
}

void solve(){
    int n,k;cin>>n>>k;
    int val=n*(n-1)/2;
    if(k>val){
        cout<<-1<<nl;
        return;
    }
    vi ans;
    int reqnum=ceil(sqrt(2*k));
    for(int a=0;a<reqnum;a++){
        ans.pb(p[a]);
    }
    k-=((reqnum*(reqnum-1))/2);
    // while(k-(reqnum-1)>=0){
    //     k-=reqnum-1;
    //     ans.pb(2);
    // }
    vi pm;
    int pr=1;
    for(int a=0;a<reqnum;a++){
        pm.pb(pr*p[a]);
        pr*=p[a];
    }
    // for(auto el:pm)
    // {cout<<el<<sp;};
    // cout<<nl;
    for(int i=1;i<=reqnum-1;i++){
        int val=k/(reqnum-i);
        k-=val;
        if(k<=0)break;
        while(val--){
            ans.pb(pm[i-1]);
            if(ans.size()==n)break;
                    if(k<=0)break;
        }
        if(ans.size()==n)break;
                if(k<=0)break;
    }
    while(ans.size()<n){
        ans.pb(pm.back());
    }
    for(auto a:ans){
        cout<<a<<sp;
    }
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

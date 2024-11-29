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
int x,a;
int y,b;

bool f(int num,vi &v,int k){
    int divx=num/a;
    int divy=num/b;
    int lcm=(a*b)/gcd(a,b);
    int divboth=num/(lcm);
    // cout<<num<<sp<<divx<<sp<<divy<<sp<<divboth<<nl;
    divx-=divboth;
    divy-=divboth;
    int sum=0;
    int ind=0;
    while(divboth>0){
        sum+=(v[ind]*(x+y)/100);
        divboth--;
        ind++;
    }
    // cout<<"ENTER DIVX "<<divx<<nl;;
    while(divx>0){
        // cout<<v[ind]<<sp<<x<<nl;;
        sum+=(v[ind]*x/100);
        divx--;
        ind++;
    }
    // cout<<nl;
    while(divy>0){
        sum+=(v[ind]*y/100);
        divy--;
        ind++;
    }
    // cout<<num<<sp<<sum<<nl;
    return sum>=k;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    sort(rall(v));
    cin>>x>>a;
    cin>>y>>b;
    if(x<y){
        swap(x,y);
        swap(a,b);
    }
    int k;cin>>k;
    int l=1,r=n,ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(f(m,v,k)){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<nl;
    // cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

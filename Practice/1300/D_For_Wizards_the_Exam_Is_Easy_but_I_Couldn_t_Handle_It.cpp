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
    vi v(n);input(v);
    vector<pii>vp(n);
    for(int a=0;a<n;a++){
        int cnt=0;
        int maxcnt=0;
        int ind=0;
        for(int b=a+1;b<n;b++){
            if(v[b]<v[a])cnt++;
            else if(v[b]>v[a])cnt--;
            if(cnt>maxcnt){
                maxcnt=cnt;
                ind=b;
            }
        }
        vp[a]={maxcnt,ind};
        // cout<<maxcnt<<sp<<ind<<sp<<" - ";
    }
    int l=0;
    int r=0;
    int maxcnt=0;
    for(int a=0;a<n;a++){
        if(vp[a].X>maxcnt){
            l=a;
            r=vp[a].Y;
            maxcnt=vp[a].X;
        }
    }
    // if(vp[a].X>maxcnt){
    //     l=a;
    //     r=vp[a].Y;
    //     maxcnt=vp[a].X;
    // }
    cout<<l+1<<sp<<r+1<<nl;
}   



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define ld long double
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

bool f(ld x,vector<ld>&v,int d){
    int n=v.size();
    vector<ld>v2(n);
    for(int a=0;a<n;a++){
        v2[a]=v[a]-x;
    }
    for(int a=1;a<n;a++){
        v2[a]+=v2[a-1];
    }
    ld minsfr=0;
    for(int a=d-1;a<n;a++){
        ld bstn=v2[a]-minsfr;
        if(bstn>=0)return 1;
        minsfr=min(minsfr,v2[a-d+1]);
    }
    return 0;
}

void solve(){
    int n,d;cin>>n>>d;
    vector<long double>v(n);
    input(v);
    ld l=0,r=100;
    for(int a=1;a<=100;a++){
        ld mid=(l+r)/2;
        if(f(mid,v,d)){
            l=mid;
        }
        else r=mid;
    }
    for(int a=0;a<n;a++){
        v[a]-=l;
    }
    for(int a=1;a<n;a++)
    v[a]+=v[a-1];
    ld minsfr=0;
    int lbst=-1;
    for(int a=d-1;a<n;a++){
        // cout<<v[a]<<sp;
        ld bst=v[a]-minsfr;
        if(bst>=0){
            cout<<lbst+2<<sp<<a+1<<nl;
            return;
        }
        if(minsfr>v[a-d+1]){
            minsfr=v[a-d+1];
            lbst=a-d+1;
        }
    }
    // cout<<ans.X<<sp<<ans.Y<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

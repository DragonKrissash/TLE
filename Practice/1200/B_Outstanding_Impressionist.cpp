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
    vector<pii>vp(n);
    map<int,int>mp;
    vector<int>v(2*n+1);
    for(int a=0;a<n;a++){
        int l,r;
        cin>>l>>r;
        if(l==r){
            mp[l]++;
            v[l]=1;
        }
        vp[a]={l,r};
    }
    for(int a=1;a<v.size();a++){
        v[a]+=v[a-1];
    }
    string s="";
    for(int a=0;a<n;a++){
        auto [l,r]=vp[a];
        if(l==r){
            if(mp[l]>=2)s+='0';
            else s+='1';
        }
        else{
            if(v[r]-v[l-1]==(r-l+1)){
                s+='0';
            }
            else s+='1';
        }
    }
    cout<<s<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

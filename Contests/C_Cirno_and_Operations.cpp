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
    vi v(n);
    input(v);
    if(n==1){
        cout<<v[0]<<nl;
        return;
    }
    int mxsum=sm(v);
    while(v.size()>1){
        int s1=0,s2=0;
        for(int a=0;a<v.size()-1;a++){
            s1+=v[a]-v[a+1];
            s2+=v[a+1]-v[a];
        }
        if(s1>s2){
            for(int a=0;a<v.size()-1;a++){
                v[a]=v[a]-v[a+1];
            }
        }
        else{
            for(int a=0;a<v.size()-1;a++){
                v[a]=v[a+1]-v[a];
            }
        }
        mxsum=max({mxsum,s2,s1});
        v.pop_back();
    }
    cout<<mxsum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

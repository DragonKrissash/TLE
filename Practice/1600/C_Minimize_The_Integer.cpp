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
    string s;cin>>s;
    int n=s.size();
    vi odds,eves;
    for(int a=0;a<n;a++){
        if((s[a]-'0')&1){
            odds.pb(s[a]-'0');
        }
        else eves.pb(s[a]-'0');
    }
    string t="";
    int i=0,j=0;
    while(i<odds.size() and j<eves.size()){
        if(odds[i]<eves[j]){
            t+=to_string(odds[i++]);
        }
        else t+=to_string(eves[j++]);
    }
    while(i<odds.size()){
        t+=to_string(odds[i++]);
    }
    while(j<eves.size()){
        t+=to_string(eves[j++]);
    }
    cout<<t<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

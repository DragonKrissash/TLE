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

bool check(pii &cur,int i,int j){
    if(cur.X==i and cur.Y==j)return 1;
    return 0;
}

void solve(){
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    pii cur={0,0};
    int i=0,ind=0;
    bool y=0;
    while(i<1e5){
        if(s[ind]=='N'){
            cur.Y++;
        }
        if(check(cur,a,b)){
            y=1;
            break;
        }
        if(s[ind]=='E')
        cur.X++;
        if(check(cur,a,b)){
            y=1;
            break;
        }
        if(s[ind]=='S'){
            cur.Y--;
        }
        if(check(cur,a,b)){
            y=1;
            break;
        }
        if(s[ind]=='W'){
            cur.X--;
        }
        if(check(cur,a,b)){
            y=1;
            break;
        }
        ind++;
        ind%=n;
        i++;
    }
    if(y)yes;
    else no;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

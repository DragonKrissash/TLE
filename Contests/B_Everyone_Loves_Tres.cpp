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

bool check(int n){
    string s=to_string(n);
    for(int a=0;a<s.size();a++){
        if(s[a]!='3' and s[a]!='6')
        return 0;
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    if(n==1 or n==3)cout<<-1<<nl;
    else if(n==2)cout<<"66"<<nl;
    else{
        string s="";
        if(n&1){
            s="6366";
        }
        else{
            s="3366";
        }
        n-=4;
        for(int a=1;a<=n;a++){
            s="3"+s;
        }
        cout<<s<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    vi v(2*n);
    input(v);
    int s1=0,s2=0;
    set<int>st1,st2;
    n*=2;
    for(int a=0;a<n;a++){
        if(a&1){
            s1+=v[a];
            st1.insert(v[a]);
        }
        else{
            s2+=v[a];
            st2.insert(v[a]);
        }
    }
    int st;
    if(s1>s2){
        cout<<s1-s2<<sp;
        for(int a=0;a<n;a++){
            if((a&1)==0){
            }
        }
    }
    else{
        cout<<s2-s1<<sp;
        st=1;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

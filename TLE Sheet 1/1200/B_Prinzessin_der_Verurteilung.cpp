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
    int n;cin>>n;
    string s;cin>>s;
    set<string>st;
    for(int a=1;a<=3;a++){
        for(int b=0;b<n;b++){
            st.insert(s.substr(b,a));
        }
    }
    for(char c='a';c<='z';c++){
        string t="";
        t=t+c;
        if(st.count(t)==0){
            cout<<c<<nl;
            return;
        }
    }
    for(char c='a';c<='z';c++){
        for(char d='a';d<='z';d++){
            string t="";
            t=t+c+d;
            if(st.count(t)==0){
                cout<<t<<nl;
                return;
            }
        }
    }
    for(char e='a';e<='z';e++)
    {for(char c='a';c<='z';c++){
        for(char d='a';d<='z';d++){
            string t="";
            t=t+e+c+d;
            if(st.count(t)==0){
                cout<<t<<nl;
                return;
            }
        }
    }}
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

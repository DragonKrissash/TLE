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

void solve(){
    string s;cin>>s;
    int n=s.size();
    int q;cin>>q;
    int ans=0;
    for(int a=0;a<n;a++){
        if(a+3<n){
            if(s[a]=='1' and s[a+1]=='1' and s[a+2]=='0' and  s[a+3]=='0')
            ans++;
        }
    }
    while(q--){
        int ind;char num;
        cin>>ind>>num;
        if(n<=3){
            no;
            continue;
        }
        ind--;
        for(int a=0;a<4;a++){
            int t=ind+a;
            if(t-3>=0 and t<n){
                if(s[t-3]=='1' and s[t-2]=='1' and s[t-1]=='0' and s[t]=='0')
                ans--;
            }
        }
        s[ind]=num;
        for(int a=0;a<4;a++){
            int t=ind+a;
            if(t-3>=0 and t<n){
                if(s[t-3]=='1' and s[t-2]=='1' and s[t-1]=='0' and s[t]=='0')
                ans++;
            }
        }
        if(ans)yes;
        else no;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

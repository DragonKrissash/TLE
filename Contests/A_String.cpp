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
    string s;cin>>s;
    int n=s.size();
    int cnt=0;
    if(n==1 and s[0]=='1'){
        cout<<1<<nl;
        return;
    }
    int cnt1=0;
    for(int a=0;a<n;){
        int l=a,r=n-1;
        while(s[l]=='0')l++;
        while(s[r]=='0')r--;
        if(l<=r)
        cnt++;
        else break;
        // for(int b=l-1;b<=r+1;b++){
        //     cout<<s[b];
        //     s[b]=(s[b]=='0')? '1':'0';
        // }
        // cout<<nl;
        // for(int b=l;b<=r;b++){
        //     cout<<s[b];
        //     // s[b]=(s[b]=='0')? '1':'0';
        // }
        // cout<<nl;
        a=l+1;
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vector<string>vs(n);
    input(vs);
    sort(all(vs),[&](string s,string t){
        int cnt1s=0,cnt1h=0,cnt2s=0,cnt2h=0;
        for(int a=0;a<s.size();a++){
            if(s[a]=='s')cnt1s++;
            else cnt1h++;
        }
        for(int a=0;a<t.size();a++){
            if(t[a]=='s')cnt2s++;
            else cnt2h++;
        }
        if(cnt1s*cnt2h>cnt2s*cnt1h)
        return 1;
        else return 0;
    });
    string sen="";
    for(int a=0;a<n;a++){
        sen+=vs[a];
    }
    int cnth=0,cnts=0;
    for(int a=0;a<sen.size();a++){
        if(sen[a]=='h')cnth++;
    }
    int sum=0;
    for(int a=0;a<sen.size();a++){
        if(sen[a]=='s'){
            sum+=cnth;
            cnts--;
        }
        else{
            cnth--;
        }
    }
    cout<<sum<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

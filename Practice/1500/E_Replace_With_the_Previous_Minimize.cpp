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

int find(int a,vi &par){
    if(par[a]==a)return par[a]=a;
    else return par[a]=find(par[a],par);
}

void add(int a,int b,vi &par){
    // cout<<a<<sp<<b<<nl;
    a=find(a,par);
    b=find(b,par);
    par[a]=b;
}

void work(string &s,int ind,int red,vi &par){
    for(int a=0;a<red;a++){
        add(s[ind]-'a',s[ind]-'a'-1,par);
        s[ind]--;
    }
}

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>par(26);
    for(int a=0;a<26;a++){
        par[a]=a;
    }
    int ind=0;
    int lastind=0;
    for(int a=0;a<n;a++){
        if(s[a]-'a'>lastind){
            int red=min(k,s[a]-'a'-lastind);
            int newind=s[a]-'a';
            work(s,a,red,par);
            k-=red;
            lastind=newind;
        }
        if(k<=0)break;
    }
    for(int a=0;a<26;a++){
        par[a]=find(a,par);
    }
    for(int a=0;a<n;a++){
        cout<<(char)(97+par[s[a]-'a']);
    }
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

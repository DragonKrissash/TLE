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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int check(string t,vector<string>&v){
    int ind=-1e9;
    for(auto &s:v){
        int ptr=s.size()-1;
        for(int a=t.size()-1;a>=0;a--){
            if(s[ptr]==t[a])ptr--;
            else break;
            if(ptr==-1)break;
        }
        if(ptr==-1){
            ind=max(ind,(int)(t.length()-s.length()));
        }
    } 
    return (ind==-1e9) ? -1:ind;
}

void solve(){
    string s;cin>>s;
    int m=s.size();
    int n;cin>>n;
    vector<string>v(n);
    input(v);
    int ans=0,ind=0;
    string t="";
    for(int i=0,j=0;j<m;j++){
        t.pb(s[j]);
        int pos=-1; 
        pos=check(t,v);
        if(pos!=-1 and pos>=i){
            i=pos+1;    
        }
        if(ans<= j-i+1){
            ans=j-i+1;
            ind=i;
        }
    }
    cout<<ans<<sp<<ind<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

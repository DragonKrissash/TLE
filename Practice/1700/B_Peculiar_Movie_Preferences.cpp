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

bool ispalin(string &s){
    int i=0,j=s.size()-1;
    if(s.size()==1)return 1;
    while(i<j){
        if(s[i]!=s[j])return 0;
        i++;j--;
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    vector<string>vs(n);
    for(int a=0;a<n;a++){
        cin>>vs[a];
    }
    set<string>st;
    for(int a=0;a<n;a++){
        if(ispalin(vs[a])){
            yes;
            return;
        }
    }
    for(int a=n-1;a>=0;a--){
        string s=vs[a];
        reverse(all(s));
        if(st.count(s)){
            yes;
            return;
        }
        st.insert(vs[a]);
    }
    st.clear();
    for(int a=n-1;a>=0;a--){
        string s=vs[a];
        if(s.length()==2){
            reverse(all(s));
            if(st.count(s)){
                yes;
                return;
            }
        }
        if(vs[a].length()==3){
            s=vs[a];
            st.insert(s.substr(1,2));
        }
    }
    st.clear();
    for(int a=0;a<n;a++){
        string s=vs[a];
        if(s.size()==2){
            reverse(all(s));
            if(st.count(s)){
                yes;
                return;
            }
        }
        if(vs[a].size()==3){
            s=vs[a];
            st.insert(s.substr(0,2));
        }
    }
    no;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

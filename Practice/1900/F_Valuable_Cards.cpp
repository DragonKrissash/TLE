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
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    set<int>cur,fac;
    cur.insert(1);
    for(int a=1;a*a<=k;a++){
        if(k%a==0){
            fac.insert(a);
            fac.insert(k/a);
        }
    }
    int cnt=1;
    for(int a=0;a<n;a++){
        set<int>st;
        st.insert(v[a]);
        for(auto j:fac){
            if(j%v[a]==0 and cur.count(j/v[a]))st.insert(j);
        }
        if(st.count(k)){
            cnt++;
            cur.clear();
            cur.insert(v[a]);
            cur.insert(1);
        }
        else for(auto i:st)cur.insert(i);
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

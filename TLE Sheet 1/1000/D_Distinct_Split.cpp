#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    set<char>st;
    vi pre(n),suf(n);
    for(int a=0;a<n;a++){
        st.insert(s[a]);
        pre[a]=st.size();
    }
    st.clear();
    for(int a=n-1;a>=0;a--){
        st.insert(s[a]);
        suf[a]=st.size();
    }
    int sum=0;
    for(int a=0;a<n-1;a++){
        sum=max(sum,pre[a]+suf[a+1]);
    }
    cout<<sum<<nl;
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
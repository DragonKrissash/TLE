#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string s;cin>>s;
    stack<char>st;
    int cnt=0;
    for(int a=0;a<s.size();a++){
        if(!st.empty() and st.top()!=s[a]){
                st.pop();
                cnt++;
        }
        else st.push(s[a]);
    }
    if((cnt&1)){
        cout<<"DA"<<nl;
    }
    else cout<<"NET"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
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
    int n;
    cin>>n;
    string s;cin>>s;
    stack<char>st;
    for(int a=0;a<n;a++){
        if(!st.empty() and st.top()=='(' and s[a]==')'){
            st.pop();
        }
        else st.push(s[a]);
    }
    cout<<st.size()/2<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
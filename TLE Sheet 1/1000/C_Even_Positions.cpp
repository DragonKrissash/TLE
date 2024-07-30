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
    int ans=0;
    if(n==2){
        cout<<1<<nl;
        return;
    }
    string word="";
    word+='(';
    word+=s[1];
    for(int a=2;a<n;a++){
        if(s[a]=='_'){
            if(s[a-1]=='('){
                word+=")";
            }
            else word+='(';
        }
        else word+=s[a];
    }
    stack<pair<char,int>> st;
    for(int a=n-1;a>=0;a--){
        if(st.empty()){
            st.push({word[a],a});
        }
        else{
            if(st.top().X==')' and word[a]=='('){
                ans+=st.top().Y-a;
                st.pop();
            }
            else if(st.top().X==word[a]){
                st.push({word[a],a});
            }
        }
    }
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
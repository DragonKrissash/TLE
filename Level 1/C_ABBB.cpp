#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        stack<char>st;
        for(int a=0;a<s.length();a++){
            if(st.empty() || s[a]=='A')
            st.push(s[a]);
            else{
                if(st.top()=='A' && s[a]=='B')
                st.pop();
                else if(st.top()=='B' && s[a]=='B')
                st.pop();
            }
        }
        cout<<st.size()<<endl;
    }
}
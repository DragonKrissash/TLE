#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<string,int>st;
    string word="";
    for(int a=0;a<s.size()-1;a++)
    {word=s[a];
        word+=s[a+1];
        st[word]++;
    }
    // for(auto [key,val]:st){
    //     cout<<key<< " "<<val<<endl;
    // }
    cout<<st.size()<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
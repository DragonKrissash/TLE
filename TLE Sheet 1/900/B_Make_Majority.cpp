#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string word="";
    word+=s[0];
    if(n==1){
        if(s[0]=='1')cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
        return;
    }
    for(int a=1;a<n;a++){
        if(s[a]=='1' || (s[a]=='0' and s[a-1]=='1'))
        word+=s[a];
    }
    map<char,int>mp;
    for(int a=0;a<word.length();a++){
        mp[word[a]]++;
    }
    if(mp['0']>=mp['1'])cout<<"No"<<nl;
    else cout<<"Yes"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
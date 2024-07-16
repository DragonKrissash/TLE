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
    if(s[0]==s[s.length()-1])
    cout<<s<<nl;
    else {
        s[s.length()-1]=s[0];
        cout<<s<<nl;
    }
    }


signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
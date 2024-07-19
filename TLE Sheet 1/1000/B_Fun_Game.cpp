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
    string s;string t;cin>>s>>t;
    if(s==t){
        cout<<"YES"<<nl;
        return;
    }
    if(s[0]=='0'){
        bool y=false;
        for(int a=0;a<n;a++){
            if(s[a]=='0' and t[a]=='1' and y==false){
                cout<<"NO"<<nl;
                return;
            }
            if(s[a]=='1')
            y=true;
        }
        cout<<"YES"<<nl;
        return;
    }
    else if(s[0]=='1'){
        cout<<"YES"<<nl;
        return;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
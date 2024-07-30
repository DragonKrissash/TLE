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
    string s;cin>>s;
    int n=s.size();
    if(n==1){
        if(s[0]<='y')
        cout<<s[0]<<(char)(s[0]+1)<<nl;
        else if(s[0]=='z')
        cout<<'a'<<'z'<<nl;
        return;
    }
    for(int a=1;a<n;a++){
        if(s[a]==s[a-1] and s[a]!='z'){
            s.insert(s.begin()+a,(char)(s[a]+1));
            cout<<s<<nl;
            return;
        }
        else if(s[a-1]=='z' and s[a]=='z')
        {
            s.insert(s.begin()+a,'a');
            cout<<s<<nl;
            return;
        }
    }
    if(s[n-1]=='z'){
        cout<<s<<'a'<<nl;
        return;
    }
    else{
        cout<<s<<(char)(s[n-1]+1)<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
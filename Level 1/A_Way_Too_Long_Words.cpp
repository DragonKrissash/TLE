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
        string s;cin>>s;
    if(s.length()<=10)
    cout<<s<<endl;
    else cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
}
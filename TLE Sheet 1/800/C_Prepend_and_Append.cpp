#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int a=0,b=n-1;
    int cnt=n;
    while(a<b){
        if(s[a]==s[b])break;
        else {
            cnt-=2;
            a++;b--;
        }
    }
    cout<<cnt<<endl;
    }

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
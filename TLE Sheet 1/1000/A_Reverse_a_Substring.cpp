#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define output(v) for(int a=0;a<v.size();a++)cout<<v[a]<<" "
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    for(int a=0;a<n;a++){
        if(s[a]=='a')
        continue;
        else if(s[a]==s[a-1]){
            continue;
        }
        else{
            for(int b=a+1;b<n;b++){
                if(s[b]<s[a]){
                    cout<<"YES"<<nl;
                    cout<<a+1<<" "<<b+1<<nl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
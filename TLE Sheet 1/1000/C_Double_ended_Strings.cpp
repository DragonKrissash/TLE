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
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size();
    int lcs=0;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            int i=a,j=b;
            int len=0;
            while(i<n and j<m and s[i++]==t[j++]){
                len++;
            }
            lcs=max(lcs,len);
        }
    }
    cout<<n+m-2*lcs<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
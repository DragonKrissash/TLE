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
    int n,x;cin>>n>>x;
    int cnt=0;
    int l=-1,r=1e9+5;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a+x <l || a-x >r){
            cnt++;
            l=a-x;
            r=a+x;
        }
        else{
            l=max(l,a-x);
            r=min(r,a+x);
        }
    }
    cout<<cnt<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
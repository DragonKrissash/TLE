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
    char arr[2][n];
    for(int a=0;a<2;a++){
        for(int b=0;b<n;b++){
            cin>>arr[a][b];
        }
    }
    int ans=0;
    for(int b=1;b<n-1;b++){
        if(arr[0][b]=='.')
        if(arr[0][b-1]=='.' and arr[0][b+1]=='.')
        if(arr[1][b]=='.' and arr[1][b-1]=='x' and arr[1][b+1]=='x'){
            ans++;
            arr[0][b]='x';
        }
    }
    for(int b=1;b<n-1;b++){
        if(arr[1][b]=='.')
        if(arr[1][b-1]=='.' and arr[1][b+1]=='.')
        if(arr[0][b]=='.' and arr[0][b-1]=='x' and arr[0][b+1]=='x'){
            ans++;
            arr[1][b]='x';
        }
    }
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
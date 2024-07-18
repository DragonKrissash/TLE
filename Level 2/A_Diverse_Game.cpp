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
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            cin>>arr[a][b];
        }
    }
    if(n==m and n==1)
    {
        cout<<-1<<nl;
        return;
    }
    if(n==1){
        for(int a=1;a<m;a++){
            cout<<arr[0][a]<<" ";
        }
        cout<<arr[0][0]<<nl;
        return;
    }
    else if(m==1){
        for(int a=1;a<n;a++){
            cout<<arr[a][0]<<" ";
        }
        cout<<arr[0][0]<<nl;
        return;
    }
    else{
        for(int a=1;a<n;a++){
            for(int b=0;b<m;b++){
                cout<<arr[a][b]<<" ";
            }
            cout<<nl;
        }
        for(int a=0;a<m;a++){
            cout<<arr[0][a]<<" ";
        }
        cout<<nl;
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
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    int dis=0;
    for(int a=n-1;a>0;a--){
        dis=max(dis,v[a]-v[a-1]);
    }
    dis=max(dis,v[0]);
    dis=max(dis,2*(x-v[n-1]));
    cout<<dis<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
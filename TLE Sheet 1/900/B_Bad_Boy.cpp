#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    // if(n==m and n==1){
    //     cout<<1<<" "<<1<<" "<<1<<" "<<1<<nl;
    //     return; 
    // }
    // else if(n==1){
    //     if(x==1)cout<<1<<" "<<m<<" "<<1<<" "<<2<<nl;
    //     else{
    //         cout<<1<<" "<<1<<" "<<1<<" "<<m<<nl;
    //     }
    //     return;
    // }
    // else if(m==1){
    //     if(y==1)cout<<n<<" "<<1<<" "<<2<<" "<<1<<nl;
    //     else{
    //         cout<<1<<" "<<1<<" "<<n<<" "<<1<<nl;
    //     }
    //     return;
    // }
    // int x1,x2,y1,y2;
    // x1=(x<n-x)? 1:n;
    // y1=(y<m-y)? 1:m;
    // x2=(x1==1)? n:1;
    // y2=(y1==1)? m:1;
    cout<<n<<" "<<m<<" "<<1<<" "<<1<<nl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
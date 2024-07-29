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
    vector<pair<int,int>>v(n);
    for(int a=0;a<n;a++){
        int x;cin>>x;
        v[a]={x,a+1};
    }
    if(n==1){
        cout<<v[0].X<<nl;
        return;
    }
    sort(all(v));
    for(int a=n-1;a>=0;a--){
        if(v[a].Y==n || v[a].X==1)
        {
            cout<<v[a].X<<nl;
            return;
        }
        else if((n-v[a].Y)%2==0 and (v[a].Y-1)%2==0){
            cout<<v[a].X<<nl;
            return;
        }
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
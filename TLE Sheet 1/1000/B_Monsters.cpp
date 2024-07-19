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

bool cmp(pair<int,int>&p,pair<int,int>&q){
    if(p.X>q.X)return p.X>q.X;
    else if(p.X==q.X)return p.Y<q.Y;
    return false;
}
void solve(){

    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int a=0;a<n;a++){
        int x;
        cin>>x;
        if(x%k==0)
        v[a]={k,-a};
        else
        v[a]={x%k,-a};
    }
    sort(all(v));
    for(int a=n-1;a>=0;a--){
        cout<<abs(v[a].Y)+1<<' ';
    }
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
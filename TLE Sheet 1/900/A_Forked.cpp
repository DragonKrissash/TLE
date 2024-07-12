#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b;
    cin>>a>>b;
    int x,y,m,n;
    cin>>x>>y>>m>>n;
    set<pair<int,int>>k;
    set<pair<int,int>>q;
    k.insert({x-a,y-b});
    k.insert({x-a,y+b});
    k.insert({x+a,y-b});
    k.insert({x+a,y+b});
    
    k.insert({x-b,y-a});
    k.insert({x-b,y+a});
    k.insert({x+b,y-a});
    k.insert({x+b,y+a});

    q.insert({m+a,n+b});
    q.insert({m+a,n-b});
    q.insert({m-a,n+b});
    q.insert({m-a,n-b});


    q.insert({m+b,n+a});
    q.insert({m+b,n-a});
    q.insert({m-b,n+a});
    q.insert({m-b,n-a});

    int cnt=0;
    for(auto val:k){
        if(q.find(val)!=q.end())
        cnt++;
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
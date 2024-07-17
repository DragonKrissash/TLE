#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define sp " "

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool cmp(pair<int,int>p,pair<int,int>q){
    if(p.first==q.first)return p.second>q.second;
    else {
        return p.first<q.first;
    }
}

void solve(){
    int n,p;cin>>n>>p;
    vector<pair<int,int>>v(n);
    for(int a=0;a<n;a++){
        cin>>v[a].second;
    }
    for(int a=0;a<n;a++){
        cin>>v[a].first;
    }
    sort(all(v));
    map<int,int>mp;
    mp[p]=100+n;
    int cost=0;
    for(auto &i:v){
        int mn=(*mp.begin()).first;
        cost+=mn;
        mp[mn]--;
        mp[i.first]+=i.second;
        if(mp[mn]==0)mp.erase(mn);
    }
    cout<<cost<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
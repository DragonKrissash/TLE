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
    auto cmp=[](pair<int,int>&p,pair<int,int>&q){return p.X>q.X;};
    sort(all(v),cmp);
    int i=-1,j=1;
    vector<pair<int,int>>ans;
    ans.push_back({0,0});
    int time=0;
    int ind=0;
    while(ind<n){
        time+=2*v[ind].X*j;
        ans.push_back({v[ind].Y,j});
        j++;ind++;
        if(ind>=n)break;
        time+=2*v[ind].X*(-i);
        ans.push_back({v[ind].Y,i});
        i--;ind++;
    }
    sort(all(ans));
    cout<<time<<nl;
    for(auto a:ans){
        cout<<a.Y<<" ";
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
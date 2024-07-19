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
    int n; cin >> n;
    vi v1(n);
    vi v2(n);
    input(v1);input(v2);
    unordered_map<int,int>mpa,mpb;
    int ind=0;
    int vl=0;
    int cnt=0;
    while(ind<n){
        vl=v1[ind];
        cnt=0;
        while(ind<n and v1[ind]==vl){
            cnt++;
            ind++;
        }
        mpa[vl]=max(cnt,mpa[vl]);
    }
    ind=0;
    while(ind<n){
        cnt=0;
        vl=v2[ind];
        while(ind<n and v2[ind]==vl){
            cnt++;
            ind++;
        }
        mpb[vl]=max(cnt,mpb[vl]);
    }
    int ans=0;
    for(auto [key,val]:mpa){
        int c1=mpa[key];
        int c2=mpb[key];
        ans=max(ans,c1+c2);
    }
    for(auto [key,val]:mpb){
        int c1=mpa[key];
        int c2=mpb[key];
        ans=max(ans,c1+c2);
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
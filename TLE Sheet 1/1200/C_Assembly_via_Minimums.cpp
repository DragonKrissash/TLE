//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vi v;
    map<int,int>mp;
    for(int a=0;a<(n*(n-1)/2);a++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(all(v));
    for(int a=0;a<(n*(n-1)/2);a++){
        mp[v[a]]++;
    }
    vi ans;
    int cnt=n-1;
    int ind=0;
    for(int a=0;a<n;a++){
        ans.push_back(v[ind]);
        mp[v[ind]]-=cnt;
        if(mp[v[ind]]==0){
            while(ind<(n*(n-1)/2) and v[ind]==ans[a])ind++;
        }
        cnt--;
    }
    ans[n-1]=v.back();
    for(int a=0;a<n;a++)
    cout<<ans[a]<<sp;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

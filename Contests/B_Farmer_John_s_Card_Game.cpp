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
#define pb push_back
#define ld long double
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
    int n,m;cin>>n>>m;
    vector<vi>vp(n,vi(m,0));
    map<int,int>mp;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            int x;cin>>x;
            mp[x]=a;
        }
    }
    int last=-1;
    int num=0;
    vi ans;
    if(n==1){
        cout<<1<<nl;
        return;
    }
    while(num<n*m){
        if(last!=-1 and mp[num]==last){
            cout<<-1<<nl;
            return;
        }
        else{
            ans.pb(mp[num]);
            last=mp[num];
            num++;
        }
    }
    for(int a=0;a<n;a++)cout<<ans[a]+1<<sp;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

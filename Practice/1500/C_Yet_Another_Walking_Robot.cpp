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

pii getDir(char c,pii &cur){
    if(c=='U'){
        cur.Y+=-1;
    }
    else if(c=='D'){
        cur.Y+=1;
    }
    else if(c=='R')
    cur.X+=1;
    else cur.X+=-1;
    return cur; 
    
}

void solve(){
    int n;cin>>n;
    string dir;cin>>dir;
    map<pii,int>vis;
    pii cur={0,0};
    vis[cur]=0;
    int l=-1,r=n;
    for(int a=0;a<n;a++){
        cur=getDir(dir[a],cur);
        if(vis.count(cur)){
            if(a-vis[cur]+1 < r-l+1){
                l=vis[cur];
                r=a;
            }
        }
        vis[cur]=a+1;
    }
    if(l==-1)cout<<-1<<nl;
    else cout<<l+1<<sp<<r+1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

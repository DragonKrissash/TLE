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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

struct per{
    int X,Y,i;
};

void solve(){
    int n;cin>>n;
    vector<per>vp(n);
    int maxroom=0;
    for(int a=0;a<n;a++){
        cin>>vp[a].X>>vp[a].Y;
        vp[a].i=a;
    }
    sort(all(vp),[&](per &p,per &y){
        return p.X<y.X;
    });
    int num=0;
    set<pii>st;
    vi ans(n);
    for(int a=0;a<n;a++){
        if(!st.empty() and (*st.begin()).X<=vp[a].X){
            auto p=(*st.begin());
            st.insert({vp[a].Y+1,p.Y});
            ans[vp[a].i]=p.Y;
            st.erase(p);
        }
        else{
            num++;
            st.insert({vp[a].Y+1,num});
            ans[vp[a].i]=num;
        }
    }
    cout<<num<<nl;
    for(int i:ans)cout<<i<<sp;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

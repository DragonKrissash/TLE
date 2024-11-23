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

int f(vi &v,int n,int ht,int st,int en,int vel){
    if(ht==0)return abs(st-en);
    int p1=lower_bound(all(v),st)-v.begin();
    int p2=p1-1;
    int ans=1<<30;
    if(p1!=n)ans=min(ans,abs(v[p1]-st)+abs(v[p1]-en));
    if(p2>=0)ans=min(ans,abs(v[p2]-st)+abs(v[p2]-en));
    return ans+(ht%vel ? ht/vel+1:ht/vel);
}

void solve(){
    int n,m,cs,ce,v;
    cin>>n>>m>>cs>>ce>>v;
    vi vc(cs);
    input(vc);
    vi ve(ce);
    input(ve);
    int q;cin>>q;
    while(q--){
        int r1,l1,r2,l2;
        cin>>r1>>l1>>r2>>l2;
        //stair
        int stime=f(vc,cs,abs(r2-r1),l1,l2,1);
        int etime=f(ve,ce,abs(r2-r1),l1,l2,v);
        cout<<min(stime,etime)<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

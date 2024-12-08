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
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,t,ai,b;cin>>n>>t>>ai>>b;
    vector<pii>vp;
    vi hard(n);
    int cntA=0,cntB=0;
    for(int a=0;a<n;a++){
        cin>>hard[a];
        if(hard[a])cntB++;
        else cntA++;
    }
    for(int a=0;a<n;a++){
        int x;cin>>x;
        vp.pb({x,hard[a]});
    }
    vp.pb({t+1,0});
    sort(all(vp));
    int cnt1=0,cnt2=0;
    int ans=0;
    for(int i=0;i<=n;i++){
        int req=cnt1*ai+cnt2*b;
        int has=vp[i].X-req-1;
        if(has>=0){
            int cana=min((cntA-cnt1),has/ai);
            has-=cana*ai;
            int canb=min((cntB-cnt2),has/b);
            ans=max(ans,cnt1+cnt2+cana+canb);
        }
        int l=i;
        while(l<=n and vp[l].X==vp[i].X){
            if(vp[l].Y){
                cnt2++;
            }
            else cnt1++;
            l++;
        }
        i=l-1;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

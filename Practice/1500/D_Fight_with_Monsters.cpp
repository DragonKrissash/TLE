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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n,ap,bp,k;cin>>n>>ap>>bp>>k;
    vi v(n);
    input(v);
    int todam=ap+bp;
    vi v2(n);
    for(int a=0;a<n;a++){
        v2[a]=v[a]%todam;
        if(v2[a]==0)v2[a]=todam;
    }
    sort(all(v2));
    int cnt=0;
    for(int a=0;a<n;a++){
        // cout<<v2[a]<<sp;
        if(v2[a]<=ap)cnt++;
        else{
            int reqk=v2[a]/ap;
            if(v2[a]%ap==0)reqk--;
            if(reqk<=k){
                cnt++;
                k-=reqk;
            }
            else break;
        }
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

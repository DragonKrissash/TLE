#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n,0);
    input(v);
    if(n==1){
        cout<<0<<nl;
        return;
    }
    map<int,int>mp;
    int maxcnt=0;
    for(int a=0;a<n;a++){
        mp[v[a]]++;
        maxcnt=max(maxcnt,mp[v[a]]);
    }
    if(maxcnt==n)
    {
        cout<<0<<nl;
        return;
    }
    int remcnt=n-maxcnt;
    int opr=0;
    while(remcnt>0){
        if(remcnt>=maxcnt){
            opr+=maxcnt;
            remcnt-=maxcnt;
        }
        else{
            opr+=remcnt;
            remcnt=0;
        }
        maxcnt*=2;
        opr++;
    }
    cout<<opr<<nl;


}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
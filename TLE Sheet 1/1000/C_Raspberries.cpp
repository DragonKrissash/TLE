#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int uppMod(int a,int b){
    return ((a+b-1)/b)*b-a;
}

void solve(){
    int n,k;cin>>n>>k;
    vi v(n,0);
    input(v);
    int minMod=INT_MAX;
    if(k==4){
        int cnt=0;
        bool y=false;
        for(int a=0;a<n;a++){
            if(v[a]%2==0)
            cnt++;
            if(v[a]%4==0)
            cnt++;
            if(v[a]==3 || v[a]==7)
            y=true;
        }
        if(cnt>=2)cout<<0<<nl;
        else if(y)cout<<1<<nl;
        else if(cnt==1)cout<<1<<nl;
        else cout<<2<<nl;
        return;
    }
    for(int a=0;a<n;a++){
        minMod=min(uppMod(v[a],k),minMod);
    }
    cout<<minMod<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
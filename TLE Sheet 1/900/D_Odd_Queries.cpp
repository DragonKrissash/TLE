#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,q;cin>>n>>q;
    vi v(n,0);
    input(v);
    vector<int>pre(n+1,0);
    pre[0]=v[0];
    for(int a=1;a<n;a++){
        pre[a]=pre[a-1]+v[a];
    }
    int sum=pre[n-1];
    for(int a=1;a<=q;a++){
        int l,r,k;cin>>l>>r>>k;
        int newsum=0;
        if(l==1){
            newsum=sum-pre[r-1];
        }
        else
            newsum=sum-(pre[r-1]-pre[l-2]);
        newsum=newsum+(r-l+1)*k;
        if(newsum%2==1)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
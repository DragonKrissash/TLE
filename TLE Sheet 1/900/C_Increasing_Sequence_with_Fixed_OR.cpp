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
    vector<int>v;
    if(n==1){
        cout<<1<<nl<<n<<nl;
        return;
    }
    for(int a=0;a<=60;a++){
        if(n&(1ll<<a)){
            v.push_back(1ll<<a);
        }
    }
    vector<int>ans;
    ans.push_back(n);
    for(int a=0;a<v.size();a++){
        if(n-v[a]>0)
        ans.push_back(n-v[a]);
    }
    cout<<ans.size()<<nl;
    for(int a=ans.size()-1;a>=0;a--)
    cout<<ans[a]<<" ";
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
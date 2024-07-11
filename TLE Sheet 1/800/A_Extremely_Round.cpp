#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string n;cin>>n;
    if(n.size()==1){
        cout<<n<<endl;
        return;
    }
    int ans=n.size()-1;
    ans=ans*9;
    ans+=n[0]-'0';
    cout<<ans<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
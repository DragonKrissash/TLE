#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((c+a)%(2*b)==0 and (c+a)!=0){
        cout<<"YES"<<nl;
    }
    else if((2*b-a)%c ==0 and (2*b-a)>0)
    cout<<"YES"<<nl;
    else if((2*b-c)%a ==0 and (2*b-c)>0)
    cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
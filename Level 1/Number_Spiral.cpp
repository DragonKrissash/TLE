#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll r,c;cin>>r>>c;
        ll ans=0;
        if(r<c){
            ans=(c-1)*(c-1);
            if(c%2!=0){
                ans+=c+(c-r);
            }
            else{
                ans+=r;
            }
        }
        else if(c<r){
            ans=(r-1)*(r-1);
            if(r%2==0){
                ans+=r+(r-c);
            }
            else{
                ans+=c;
            }
        }
        else{
            ans=(r-1)*(r-1)+r;
        }
        cout<<ans<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int a=0;a<n;a++)cin>>v[a];
    if(n==1)cout<<"YES"<<endl;
    else if(k>1)cout<<"YES"<<endl;
    else{
        bool y=true;
        for(int a=1;a<n;a++){
            if(v[a]>=v[a-1])continue;
            else{
                y=false;
                break;
            }
        }
        if(y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
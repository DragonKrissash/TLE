#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int>v;
    input(v);
    bool sorted=true;
    for(int a=1;a<n;a++){
        if(v[a]<v[a-1])
        {
            sorted=false;
            break;
        }
    }
    if(sorted){
        cout<<0<<nl;
        return;
    }
    bool onefound=false;
    for(int a=1;a<n;a++){
        if(v[a]==1)
        {
            onefound=true;
            break;
        }
    }
    if(onefound){
        cout<<-1<<nl;
        return;
    }
    int opr=0;
    for(int a=1;a<n;a++){
        while(v[a]<v[a-1]){
            v[a]*=v[a];
            opr++;
        }
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
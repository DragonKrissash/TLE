#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

int ceil(int x,int y){
    return (x+y-1)/y;
}

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int sticks=y*z;
    sticks+=z-1;
    int opr=sticks/(x-1);
    if(sticks%(x-1)!=0)
    opr++;
    cout<<opr+z<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
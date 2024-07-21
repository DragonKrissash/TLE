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
    int l=0;
    while(n>>l){
        l++;
    }
    if(n&(n-1))l--;
    else l-=2;
    int ind=0;
    for(int a=n-1;a>=0;a--){
        if(a>=(1<<l))
        cout<<a<<" ";
        else {
            cout<<ind++<<" ";
        }
    }
    cout<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
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
    int n,k;cin>>n>>k;
    if(k==0){
        cout<<0<<nl;
        return;
    }
    if(k<n){
        cout<<1<<nl;
        return;
    }
    if(k==n){
        cout<<1<<nl;
        return;
    }
    int opr=0;
    for(int a=n;a>0;a--){
        if(a==n){
            opr+=1;
            k-=a;
        }
        else {
            if(k-a>=0){
                k=k-a;
                opr++;
            }
            if(k-a>=0){
                k-=a;
                opr++;
            }
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
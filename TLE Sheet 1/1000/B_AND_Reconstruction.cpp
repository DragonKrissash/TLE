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
    vi b(n-1);
    bool isValid=true;
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    vi a(n);
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(int i=1;i<n-1;i++){
        a[i]=b[i-1]|b[i];
    }
    for(int i=0;i<n-1;i++){
        if((a[i]&a[i+1])==b[i]){
            continue;
        }
        else{
            cout<<-1<<nl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
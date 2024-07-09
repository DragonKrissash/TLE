#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int cnt=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        if(x%2==1)cnt++;
    }
    if(cnt%2==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    if(!is_sorted(all(v)))
    cout<<0<<endl;
    else{
        int dif=INT32_MAX;
        for(int a=1;a<n;a++){
            dif=min(dif,v[a]-v[a-1]);
        }
        cout<<(dif/2 +1)<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n);
    for(int a=0;a<n;a++)cin>>v[a];
    sort(all(v));
    if(binary_search(all(v),k)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
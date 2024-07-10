#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    int x=accumulate(all(v),0,bit_xor<int>());
    if(n%2==1){
        cout<<x<<endl;
    }
    else{
        if(x!=0)cout<<-1<<endl;
        else cout<<v[n-1]<<endl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
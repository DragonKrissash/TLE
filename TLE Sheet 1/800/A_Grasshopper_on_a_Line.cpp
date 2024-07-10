#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;
    cin>>n>>k;
    if(n%k!=0){
        cout<<1<<endl<<n<<endl;
    }
    else{
         cout<<2<<endl<<n-1<<" "<<1<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
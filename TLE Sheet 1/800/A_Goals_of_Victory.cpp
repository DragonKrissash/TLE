#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int sum=0;
    for(int a=0;a<n-1;a++){
        int x;cin>>x;
        sum+=x;
    }
    cout<<-sum<<endl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
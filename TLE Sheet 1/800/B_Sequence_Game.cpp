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
    vector<int>ans;
    ans.push_back(v[0]);
    for(int a=1;a<n;a++){
        if(v[a-1]<=v[a]){
            ans.push_back(v[a]);
        }else{
            ans.push_back(v[a]);
            ans.push_back(v[a]);
        }
    }
    cout<<ans.size()<<endl;
    for(int a=0;a<ans.size();a++)cout<<ans[a]<<" ";
    cout<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
} 
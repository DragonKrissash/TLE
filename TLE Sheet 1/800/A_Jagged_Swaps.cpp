#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    vector<int>v2=v;
    sort(v2.begin(),v2.end());
    for(int b=0;b<n;b++)
    for(int a=1;a<n-1;a++){
        if(v[a]>v[a-1] and v[a]>v[a+1]){
            int temp=v[a];
            v[a]=v[a+1];
            v[a+1]=temp;
        }
    }
    // for(int a=0;a<n;a++)cout<<v[a]<<" ";
    if(v==v2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
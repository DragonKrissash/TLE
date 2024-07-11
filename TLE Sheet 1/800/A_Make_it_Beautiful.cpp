#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int a=0;a<n;a++)cin>>v[a];
    bool y=true;
    for(int a=0;a<n-1;a++)if(v[a]!=v[a+1])y=false;
    if(y){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        sort(all(v));
        int temp=v[n-1];
        for(int a=n-1;a>0;a--){
            v[a]=v[a-1];
        }
        v[0]=temp;
        // vector<int>pre(n,0);
        // pre[0]=v[0];
        // for(int a=1;a<n-1;a++){
        //     if(v[a]==pre[a-1]){
        //         pre[a-1]=pre[a-1]-v[a-1]+v[a];
        //         swap(v[a],v[a-1]);
        //     }
        //     pre[a]=pre[a-1]+v[a];
        // }
        for(int a=0;a<n;a++)cout<<v[a]<<" ";
        cout<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
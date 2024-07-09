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
    bool y=false;
    sort(all(v));
    for(int a=0;a<n;a++){
        if(v[a]==v[0])y=true;
        else {y=false;break;}
    }
    if(y)cout<<-1<<endl;
    else{
        vector<int>b;
        vector<int>c;
        for(int a=0;a<n;a++){
            if(v[a]==v[0])
            b.push_back(v[a]);
            else c.push_back(v[a]);
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int a=0;a<b.size();a++)cout<<b[a]<<" ";
        cout<<endl;
        for(int a=0;a<c.size();a++)cout<<c[a]<<" ";
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
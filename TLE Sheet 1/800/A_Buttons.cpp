#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(c%2==0){
        if(a>b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else{
        if(b>a)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
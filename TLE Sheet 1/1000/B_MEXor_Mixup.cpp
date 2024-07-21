#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b;cin>>a>>b;
    int x;
    if(a==b and a==1){
        cout<<3<<nl;
        return;
    }
    int temp=a-1;
    if(temp%4==0)x=temp;
    else if(temp%4==1)x=1;
    else if(temp%4==2)x=a;
    else x=0;
    if(x==b)cout<<a<<nl;
    else {
        if((x^b)==a)cout<<a+2<<nl;
        else cout<<a+1<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
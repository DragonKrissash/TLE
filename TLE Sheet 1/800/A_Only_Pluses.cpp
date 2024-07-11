#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=5;i++){
        if(a<=b && a<=c){
            a++;
        }
        else if(b<=a && b<=c){
            b++;
        }
        else if(c<=a && c<=b){
            c++;
        }
    }    
    cout<<a*b*c<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
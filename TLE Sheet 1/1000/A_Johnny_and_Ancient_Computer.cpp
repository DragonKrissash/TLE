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
    if(a==b){
        cout<<0<<nl;
        return;
    }
    if(a%2==1 and b%2==1){
        cout<<-1<<nl;
        return;
    }
    if(a>b)swap(a,b);
    if(b%a!=0){
        cout<<-1<<nl;
        return;
    }
    int n=b/a;
    int opr=0;
    while(n%8==0){
        opr++;
        n/=8;
    }
    while(n%4==0){
        opr++;
        n/=4;
    }
    while(n%2==0){
        opr++;
        n/=2;
    }
    if(n!=1){
        cout<<-1<<nl;
        return;
    }
    cout<<opr<<nl;

}   

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
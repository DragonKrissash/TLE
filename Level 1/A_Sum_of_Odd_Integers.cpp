#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        ll n,k;cin>>n>>k;
        if(n%2==0){
            if(k%2!=0)cout<<"NO"<<endl;
            else if(k*k <=n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(k%2==0)cout<<"NO"<<endl;
            else if(k*k<=n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
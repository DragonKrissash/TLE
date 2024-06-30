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
        ll n;cin>>n;
        int cnt=0;
        for(ll a=1;a<=sqrt(n);a++){
            if(n%a==0){
                if(a%2==0)cnt++;
                if(n/a % 2==0)cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
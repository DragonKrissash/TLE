#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
vector<int>sieve(1e6+1,0);

signed main(){

    fastio
    for(int a=1;a<=1e6;a++){
    for(int b=a;b<=1e6;b+=a)
    sieve[b]++;
    }
    // for(int a=1;a<=20;a++)
    // cout<<sieve[a]<<" ";
    int tc;cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        cout<<sieve[x]<<endl;
    }
}
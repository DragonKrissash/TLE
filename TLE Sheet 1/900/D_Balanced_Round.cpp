#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    vi v(n,0);
    input(v);
    sort(all(v));
    int maxLen=0;
    int len=1;
    if(n==1)cout<<0<<nl;
    else{   
        for(int a=1;a<n;a++){
            if(v[a]-v[a-1]<=k){
                len++;
            }
            else{
                maxLen=max(maxLen,len);
                len=1;
            }
        }
        maxLen=max(len,maxLen);
        cout<<n-maxLen<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
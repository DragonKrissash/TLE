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
    int n,k,q;cin>>n>>k>>q;
    vi v(n);
    int days=0;
    for(int a=0;a<n;a++){
        cin>>v[a];
        if(v[a]<=q)days++;
    }
    if(days<k)cout<<0<<nl;
    else{   
        int l=-1;
        int sum=0;
        for(int a=0;a<n;a++){
            if(v[a]<=q){
                if(l==-1)
                l=a;
                else continue;
            }
            if(v[a]>q){
                if(l!=-1){
                    int size=a-1-l+1;
                    if(size>=k)
                    sum+=(size-k+1)*(size-k+2)/2;
                    l=-1;
                }
            }
        }
        if(l!=-1){
            int size=n-l;
            if(size>=k)
            sum+=(n-l-k+1)*(n-l+2-k)/2;
        }
        cout<<sum<<nl;
    }
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>


int main()
{
   fastio
    int n;cin>>n;
    vi v(n,0);
    for(int a=0;a<n;a++){
        cin>>v[a];
    }
    ll ans=0;
    if(n==1)cout<<0;
    else{
        for(int a=1;a<n;a++){
           if(v[a]<v[a-1])
           {
            ans+=v[a-1]-v[a];
            v[a]=v[a-1];
            }
    }
    cout<<ans;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int main()
{
   fastio
    int n,m;cin>>n>>m;
    ll cnt=0;
    vector<ll> a(5,0);
    vector<ll> b(5,0);
    for(ll x=1;x<=n;x++){
        a[x%5]++;
    }
    for(ll y=1;y<=m;y++){
        b[y%5]++;
    }
    for(int i=0;i<5;i++){
        if(i==0)cnt+=a[0]*b[0];
        else
        cnt+=a[i]*b[5-i];
    }
    cout<<cnt<<endl;
}
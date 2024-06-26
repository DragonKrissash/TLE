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
    ll n;
    cin>>n;
    ll ans=0,tot_ans=0;
    for(ll a=0,k;a<n-1;a++){
        cin>>k;
        ans+=k;
    }
    tot_ans=n*(n+1)/2 - ans;
    cout<<tot_ans;
    
}
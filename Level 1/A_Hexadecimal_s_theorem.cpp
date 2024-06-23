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
    ll n;cin>>n;
    ll a=0,b=1,c=1;
    if(n==0)
    cout<<0<<" "<<0<<" "<<0;
    else
    for(ll i=0;i<n;i++){
        if(a+b == n){
            cout<<0<<" "<<a<<" "<<b;
            break;
        }
        else{
            a=b;b=c;c=a+b;
        }
    }
}
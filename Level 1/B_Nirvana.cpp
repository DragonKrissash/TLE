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
    ll p=1;
    n++;
    ll ans=0;
    auto prod=[](ll k){
        ll z=1;
        while(k>0){
            z*=k%10;
            k/=10;
        }
        return z;
    };
    while(n>0){
        n=n/p;
        n=n*p-1;
        ans=max(ans,prod(n));
        p*=10;
    }
    cout<<ans<<endl;
}
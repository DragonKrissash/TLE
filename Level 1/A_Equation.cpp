#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isPrime(ll n){
    for(ll a=2;a<=sqrt(n);a++)
    if(n%a==0) return false;
    return true;
}

int main()
{
   fastio
   ll b=8;
   ll n;cin>>n;
    while(true){
        if(!isPrime(b) and !isPrime(n+b)){
            cout<<n+b<<" "<<b;
            break;
        }
        else b++;
    }
}
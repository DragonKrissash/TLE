#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool checkLCM(ll a,ll b,ll x){
    ll lcm=(a*b)/gcd(a,b);
    return lcm==x;
}

int main()
{
   fastio
    ll x;
    cin>>x;
    pair<ll,ll>ans;
    for(ll a=1;a<=sqrt(x);a++){
        if(x%a==0){
            if(checkLCM(a,x/a,x))
            ans={a,x/a};
        }
    }
    cout<<ans.X<<" "<<ans.Y;
}
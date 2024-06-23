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
    ll n,k;
    cin>>n>>k;
    if(n&1){
        if(k<=n/2+1){
            cout<<2*k-1<<endl;
        }
        else cout<<2*(k-n/2-1)<<endl;
    }
    else{
        if(k<=n/2){
            cout<<2*k-1<<endl;
        }
        else{
            cout<<2*(k-n/2);
        }
    }
}
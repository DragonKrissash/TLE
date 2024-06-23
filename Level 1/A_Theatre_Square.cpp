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
    double n,m,a;
    cin>>n>>m>>a;
    ll h=(ll)ceil(n/a)*ceil(m/a);
    cout<<h;
}
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
    int n;cin>>n;
    int small=INT32_MAX;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        small=min(small,abs(x));
    }
    cout<<small;
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define loop(n) for(int a=0;a<n;a++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int main()
{
   fastio
    int n,m;cin>>n>>m;
    int cnt=0;
    for(int a=0;a<=n;a++){
        for(int b=0;b<=m;b++){
            if((a*a+b == n ) && (b*b+a == m))
            cnt++;
        }
    }
    cout<<cnt;
}
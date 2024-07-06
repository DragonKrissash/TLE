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
    pair<int,int>a[n];
    pair<int,int>b[m];
    for(int i=0;i<n;i++){
        cin>>a[i].first;;
        a[i].Y=i;
    }
    for(int i=0;i<m;i++){
        cin>>b[i].X;
        b[i].Y=i;
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<m;i++){
        cout<<a[0].Y<<" "<<b[i].Y<<endl;
    }
    for(int i=1;i<n;i++){
        cout<<a[i].Y<<" "<<b[m-1].Y<<endl;
    }
}
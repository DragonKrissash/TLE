#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int w,h;
    cin>>w>>h;
    int kx1;cin>>kx1;
    vi x1(kx1);
    input(x1);
    int kx2;cin>>kx2;
    vi x2(kx2);
    input(x2);
    int ky1;cin>>ky1;
    vi y1(ky1);
    input(y1);
    int ky2;cin>>ky2;
    vi y2(ky2);
    input(y2);
    int base1=x1[kx1-1]-x1[0];
    int base2=x2[kx2-1]-x2[0];
    int basearea=max(base1,base2)*h;
    base1=y1[ky1-1]-y1[0];
    base2=y2[ky2-1]-y2[0];
    int heightarea=max(base1,base2)*w;
    cout<<max(basearea,heightarea)<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
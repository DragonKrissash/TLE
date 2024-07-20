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
    int n,d;cin>>n>>d;
    vi v(n);
    input(v);
    sort(all(v),[](int a,int b){
        return a>b;
    });
    int cnt=0;
    for(int a=0,b=n-1;a<n && b>a;a++){
        // cout<<v[a]<<nl;
        int x;
        if(v[a]>d)
        {
            cnt++;
            continue;
        }
        else if(d%v[a]==0)
        x=(d+v[a]-1)/v[a];
        else
        x=(d+v[a]-1)/v[a] -1;
        // cout<<x<<nl;
        if(b-a>=x){
            b-=x;
            cnt++;
            // cout<<cnt<<nl;
        }
        else break;
    }
    if(v[n-1]>d)cnt++;
    cout<<cnt<<nl;
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
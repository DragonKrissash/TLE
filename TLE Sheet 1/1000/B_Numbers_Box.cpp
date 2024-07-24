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
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            cin>>arr[a][b];
        }
    }
    int sum=0;
    int minel=INT_MAX;
    bool y=false;
    int cnt=0;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            sum+=abs(arr[a][b]);
            minel=min(minel,abs(arr[a][b]));
            if(arr[a][b]<0){y=true;cnt++;}
        }
    }
    if(y and cnt%2==1) sum-=2*abs(minel);
    cout<<sum<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
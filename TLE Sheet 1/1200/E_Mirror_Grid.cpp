//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
#define pb push_back
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vector<vi>arr(n,vi(n));
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            char c;
            cin>>c;
            arr[a][b]=c-'0';
        }
    }
    vector<vi>tra(n,vi(n));
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            tra[b][a]=arr[a][b];
        }
    }
    // for(int a=0;a<n;a++){
    //     for(int b=0;b<n;b++){
    //         cout<<arr[a][b]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<nine[a][b]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<twosev[a][b]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<arr[a][n-1-b]<<sp;
    //     }
    //     cout<<nl;
    // }
    int cnt=0;
    for(int a=0;a<(n+1)/2;a++){
        for(int b=0;b<n/2;b++){
            int sum=0;
            sum+=arr[a][b];
            sum+=arr[n-1-a][n-1-b];
            sum+=arr[n-1-b][a];
            sum+=arr[b][n-1-a];
            cnt+=min(sum,4-sum);
        }
    }
    // for(int a=0;a<n;a++){
    //     for(int b=0;b<n;b++){
    //         cout<<arr[a][b]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<arr[n-1-b][a]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<arr[b][n-1-a]<<sp;
    //     }
    //     cout<<sp;
    //     for(int b=0;b<n;b++){
    //         cout<<arr[n-1-a][n-1-b]<<sp;
    //     }
    //     cout<<nl;
    // }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

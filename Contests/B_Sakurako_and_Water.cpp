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
    vector<vi>v(n,vi(n));
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cin>>v[a][b];
        }
    }
    int cnt=0;
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(v[a][b]<0){
                cnt+=abs(v[a][b]);
                int rem=-v[a][b];
                for(int c=0;a+c<n and b+c<n;c++){
                    v[a+c][b+c]+=rem;
                }
            }
        }
    }
    // for(int a=0;a<n;a++){
    //     for(int b=0;b<n;b++){
    //         cout<<arr[a][b]<<sp;
    //     }
    //     cout<<nl;
    // }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

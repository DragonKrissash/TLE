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
#define ld long double
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

bool ch(int num,vector<vi>&arr,int a,int b){
    bool y=1;
    int n=arr.size();
    int m=arr[0].size();
    if(a-1>=0 and arr[a-1][b]==num)y=0;
    if(a+1<n and arr[a+1][b]==num)y=0;
    if(b-1>=m and arr[a][b-1]==num)y=0;
    if(b+1<m and arr[a][b+1]==num)y=0;
    return y;
}

void solve(){
    int n,m;cin>>n>>m;
    map<int,int>mp1,mp2,mpmx;
    vector<vi> arr(n,vi(m));
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            cin>>arr[a][b];
            mpmx[arr[a][b]]++;
        }
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            mp1[arr[a][b]]++;
            if(!ch(arr[a][b],arr,a,b)){
                mp2[arr[a][b]]++;
            }
        }
    }
    int ans=0;
    int num=0;
    int cnt=0;
    for(auto [k,val]:mpmx){
        if(mp1.count(k) and mp2.count(k)){
            num=k;
            break;
        }
        else num=k;
    }
    // cout<<num<<sp<<mp1.size()<<sp<<mp2.size()<<sp;
    for(auto [k,val]:mpmx){
        if(k==num)continue;
        else{
            if(mp1.count(k))ans++;
            if(mp2.count(k))ans++;
        }
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

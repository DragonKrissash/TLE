// //#pragma GCC optimize("Ofast")
// //#pragma GCC target("avx2")
// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define int long long
// #define vi vector<int>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
// #define X first
// #define Y second
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define sp " "
// #define repi(a,b,c) for(int i=a;i<=b;i+=c)
// #define pii pair<int,int>
// #define mx(v) max_element(v.begin(),v.end())
// #define mn(v) min_element(v.begin(),v.end())
// #define sm(v) accumulate(v.begin(),v.end(),0LL)
// #define pb push_back
// #define ld long double
// const int MOD = 1e9+7;

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// void solve();

// signed main(){

//     fastio
//     int tc;
//     tc=1;
//     // cin>>tc;
//     while(tc--){
//     solve();
//     }
// }

// int add(int a,int b){
//     return ((a%MOD)+(b%MOD))%MOD;
// }

// void solve(){
//     int n,tar;
//     cin>>n>>tar;
//     vi v(n);
//     vi arr(tar+1);
//     for(int a=0;a<n;a++){
//         cin>>v[a];
//     }
//     arr[0]=1;
//     for(int b=0;b<=tar;b++){
//         for(int a=0;a<n;a++){
//             if(arr[b]){
//                 int num=add(b,v[a]);
//                 while(num<=tar){
//                     arr[num]++;
//                     num=add(num,v[a]);
//                 }

//             }
//         }
//     }
//     cout<<arr[tar]<<nl;
//     for(int a:arr){
//         cout<<a<<sp;
//     }
// }



// // Question od be ded
// // constraints dekh be ded
// // shortcut aas satni time waste karnako be ded
// // tujere nammakam thonge, solve karsaktis


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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int add(int a,int b){
    return ((a%MOD)+(b%MOD))%MOD;
}

void solve(){
    int n,tar;cin>>n>>tar;
    vi v(n);
    input(v);
    vi arr(tar+1);
    arr[0]=1;
    for(int a=1;a<=tar;a++){
        int sum=0;
        for(int b=0;b<n;b++){
            if(a-v[b]>=0)
            sum=add(arr[a-v[b]],sum);
        }
        arr[a]=sum;
    }
    cout<<arr[tar]<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

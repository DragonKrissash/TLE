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
    int num=1;
    if(n==1){
        cout<<1<<nl;
        return;
    }
    else if(n==2){
        cout<<-1<<nl;
        return;
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            arr[a][b]=num;
            num++;
        }
    }
    for(int a=0;a<n;a++){
        if(a==n-1){
            for(int b=0;b<n;b++){
                if(b&1){
                    cout<<arr[0][b]<<sp;
                }
                else{
                    cout<<arr[a][b]<<sp;
                }
            }
            cout<<nl;
            break;
        }
        for(int b=0;b<n;b++){
            if((b&1)==0){
                cout<<arr[a][b]<<sp;
            }
            else{
                cout<<arr[a+1][b]<<sp;
            }
        }
        cout<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

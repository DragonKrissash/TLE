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

bool isPrime(int n){
    if(n==1 || n==0)
    return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}

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
    int l,r;cin>>l>>r;
    if(r<=3){
        cout<<-1<<nl;
    }
    else if(l==r){
        if(isPrime(l)){
            cout<<-1<<nl;
        }
        else{
            int num=-1;
            for(int a=2;a*a<=l;a++){
                if(l%a==0){
                    num=a;
                    break;
                }
            }
            if(num==-1)cout<<-1<<nl;
            else {
                cout<<(l/num)*(num-1)<<sp<<(l/num)<<nl;
            }
        }
    }
    else{
        int num=r-r%2;
        cout<<num/2<<sp<<num/2<<nl;
        
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

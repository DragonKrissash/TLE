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

void solve(){
    int l,r;cin>>l>>r;
    int a=0,b=0,c=0;
    int i=29,ind=-1;
    for(;i>=0;i--){
        if(((1LL<<i)&r)!=((1LL<<i)&l) and ind==-1){
            ind=i;
            break;
        }
        else{
            int temp=1LL<<i;
            temp=temp&l;
            a+=temp;
            b+=temp;
            // c+=temp;
        }
    }
    a+=1LL<<ind;
    for(int j=ind-1;j>=0;j--){
        b+=1LL<<j;
    }
    for(int i=l;i<=r;i++){
        if(i!=a and i!=b){
            c=i;
            break;
        }
    }
    cout<<a<<sp<<b<<sp<<c<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

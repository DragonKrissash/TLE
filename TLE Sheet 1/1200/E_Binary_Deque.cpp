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
    int n,s;cin>>n>>s;
    vi v(n);
    input(v);
    int tsm=sm(v);
    if(tsm<s){
        cout<<-1<<nl;
        return;
    }
    // else if(tsm==s){
    //     cout<<0<<nl;
    //     return;
    // }
    int sum=0;
    int i=0,j=0;
    int len=0;
    while(j<n and i<n){
        if(sum+v[j]<=s){
            sum+=v[j];
            len=max(len,j-i+1);
            j++;
        }
        else{
            sum-=v[i];
            i++;
        }
    }
    len=max(j-i,len);
    cout<<n-len<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

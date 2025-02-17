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
    int n;cin>>n;
    if(n==1){
        cout<<0<<nl;
        return;
    }
    int cnt2=0,cnt3=0;
    int t=n;
    while(t%2==0 and t>0){cnt2++;t/=2;}
    t=n;
    while(t%3==0 and t>0){cnt3++;t/=3;}
    if(cnt2>cnt3){
        cout<<-1<<nl;
        return;
    }
    int cnt=0;
    while(cnt2<cnt3){
        n*=2;
        cnt++;
        cnt2++;
    }
    while(n%6==0 and n>0){n/=6;cnt++;}
    if(n==1)cout<<cnt<<nl;
    else cout<<-1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

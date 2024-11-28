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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int que(int l,int r){
    cout<<"? "<<l<<sp<<r<<endl;
    int x;
    cin>>x;
    return x;
}

void solve(){
    int n;cin>>n;
    vi v;
    int sum3=que(1,3);
    int sum2=que(1,2);
    int n3=sum3-sum2;
    int sum23=que(2,3);
    int n2=sum23-n3;
    int n1=sum2-n2;
    v.pb(n1);
    v.pb(n2);
    v.pb(n3);
    for(int a=3;a<n;a++){
        int sum=que(a,a+1);
        int num=sum-v.back();
        v.pb(num);
    }
    cout<<"! ";
    for(int a:v)cout<<a<<sp;
    cout<<endl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

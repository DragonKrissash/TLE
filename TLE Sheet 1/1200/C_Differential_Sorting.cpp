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

bool sorted(vi &v){
    for(int a=0;a<v.size()-1;a++){
        if(v[a]>v[a+1])
        return 0;
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    if(sorted(v)){
        cout<<0<<nl;
        return;
    }
    if(v[n-2]>v[n-1] or (v[n-2]<0 and v[n-1]<0)){
        cout<<-1<<nl;
        return;
    }
    
    cout<<n-2<<nl;
    for(int a=0;a<n-2;a++){
        cout<<a+1<<sp<<n-1<<sp<<n<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

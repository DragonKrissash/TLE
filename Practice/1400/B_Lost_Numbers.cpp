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

int que(int i,int j){
    cout<<"? "<<i<<sp<<j<<endl;
    int x;
    cin>>x;
    return x;
}

void solve(){
    vi perm={4,8,15,16,23,42};
    vi ans;
    ans.pb(que(1,2));
    ans.pb(que(2,3));
    ans.pb(que(3,4));
    ans.pb(que(4,5));
    do{
        bool y=1;
        for(int a=0;a<4;a++){
            y&=(perm[a]*perm[a+1] == ans[a]);
        }
        if(y)break;
    }
    while(next_permutation(all(perm)));
    cout<<"! ";
    for(int a:perm)cout<<a<<sp;
    cout<<endl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

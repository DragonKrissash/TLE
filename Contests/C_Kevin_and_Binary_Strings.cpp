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
    string s;cin>>s;
    int n=s.size();
    int ind=-1;
    int cnt=0;
    for(int a=0;a<n;a++){
        if(s[a]=='0'){
            cnt++;
            if(ind==-1){
                ind=a;
            }
        }
        else if(cnt!=0 and s[a]=='1'){
            break;
        }
    }
    if(ind==-1){
        cout<<1<<sp<<n<<sp<<1<<sp<<1<<nl;
        return;
    }
    if(cnt==n){
        cout<<1<<sp<<n<<sp<<1<<sp<<n<<nl;
        return;
    }
    cout<<1<<sp<<n<<sp<<ind-min(cnt,ind)+1<<sp<<n-min(cnt,ind)<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

bool isP(int n){
    if(n==1 or n==0)return 0;
    for(int a=2;a*a<=n;a++){
        if(n%a==0)return 0;
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    if(n<=4){
        cout<<-1<<nl;
        return;
    }
    vi v;
    set<int>st;
    for(int a=1;a<=n;a+=2){
        st.insert(a);
        v.pb(a);
    }
    int num=v.back();
    for(int a=2;a<=n;a+=2){
        if(isP(num+a)==0){
            v.pb(a);
            st.insert(a);
            break;
        }
    }
    for(int a=2;a<=n;a+=2){
        if(st.count(a)==0){
            v.pb(a);
        }
    }
    for(int a=0;a<v.size();a++){
        cout<<v[a]<<sp;
    }
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

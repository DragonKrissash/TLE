//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
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
    int b,c,d;cin>>b>>c>>d;
    int num=0;
    for(int a=0;a<62;a++){
        int bbit=(b>>a)&1;
        int dbit=(d>>a)&1;
        int cbit=(c>>a)&1;
        if(bbit==dbit){
            num+=0LL<<a;
        }
        else if(bbit==1 and dbit==0){
            num+=1LL<<a;
        }
        else if(bbit==0 and dbit==1){
            if(cbit){
                cout<<-1<<nl;
                return;
            }
            else{
                num+=1LL<<a;
            }
        }
    }
    if(((num|b)-(num&c))==d)
    cout<<num<<nl;
    else cout<<-1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

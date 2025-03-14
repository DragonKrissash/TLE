//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
#include <cstdlib>
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

int ask(int a,int b,int c){
    cout<<"? "<<a<<sp<<b<<sp<<c<<endl;
    int x;
    cin>>x;
    return x;
}

void solve(){
    int n;cin>>n;
    int n1=1,n2=2,n3=3;
    for(int a=1;a<=75;a++){
        int t=ask(n1,n2,n3);
        if(t==0){
            cout<<"! "<<n1<<sp<<n2<<sp<<n3<<endl;
            return;
        }
        else{
            int r1=ask  (t,n2,n3);
            int r2=ask(n1,t,n3);
            int r3=ask(n1,n2,t);
            if(r1==0){
                cout<<"! "<<t<<sp<<n2<<sp<<n3<<endl;
                return;
            }
            if(r2==0){
                cout<<"! "<<n1<<sp<<t<<sp<<n3<<endl;
                return;
            }
            if(r3==0){
                cout<<"! "<<n1<<sp<<n2<<sp<<t<<endl;
                return;
            }
        }
        if(a%3==0)n1=t;
        if(a%3==1)n2=t;
        if(a%3==2)n3=t;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

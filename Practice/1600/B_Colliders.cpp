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

void solve(){
    int n,m;cin>>n>>m;
    vi colState(n+1,0);
    vector<vi> givPrimes(n+1);
    vector<set<int>>colWithPrime(n+1);
    for(int a=2;a<=n;a++){
        if(givPrimes[a].size()==0){
            for(int b=a;b<=n;b+=a){
                // cout<<a<<sp<<b<<nl;
                givPrimes[b].pb(a);
            }
        }
    }
    while(m--){
        string opr;int num;cin>>opr>>num;
        if(opr=="+"){
            if(colState[num]==1){
                cout<<"Already on"<<nl;
            }
            else{
                int y=1;
                    // cout<<num<<sp;
                for(int prime:givPrimes[num]){
                    if(colWithPrime[prime].size()!=0){
                        cout<<"Conflict with "<<*colWithPrime[prime].begin()<<nl;
                        y=0;
                        break;
                    }
                }
                if(y){
                    cout<<"Success"<<nl;
                    colState[num]=1;
                    for(int prime:givPrimes[num]){
                        colWithPrime[prime].insert(num);
                    }
                }
                // cout<<sp<<num<<sp<<colState[num]<<nl;
            }
        }
        else{
            if(colState[num]==0){
                cout<<"Already off"<<nl;
            }
            else{
                for(int prime:givPrimes[num]){
                    colWithPrime[prime].erase(num);
                }
                colState[num]=0;
                cout<<"Success"<<nl;
            }
        }
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

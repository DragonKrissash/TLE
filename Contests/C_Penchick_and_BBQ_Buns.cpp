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
    int n;cin>>n;
    if(n&1){
        if(n<27){
            cout<<-1<<nl;
            return;
        }
        else{
            vi v(n+1,-1);
            v[1]=1;
            v[10]=1;
            v[11]=2;
            v[27]=2;
            v[26]=1;
            int num=3;
            for(int a=1;a<=n;a++){
                if(v[a]!=-1){
                    cout<<v[a]<<sp;
                }
                else{
                    cout<<num<<sp<<num<<sp;
                    a++;
                    num++;
                }
            }
            cout<<nl;
        }
    }
    else{
        for(int a=1;a<=n/2;a++){
            cout<<a<<sp<<a<<sp;
        }
        cout<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

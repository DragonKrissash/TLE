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

bool checkPal(vi &v,int p){
    int n=v.size();
    int i=0,j=n-1;
    while(i<=j){
        if(v[i]==p){i++;continue;}
        if(v[j]==p){j--;continue;}
        if(v[i]==v[j]){
            i++;j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    if(n==1){
        yes;
        return;
    }
    int i=0,j=n-1;
    while(i<=j){
        if(v[i]==v[j]){
            i++;j--;
        }
        else{
            if(checkPal(v,v[i])){
                yes;
                return;
            }
            if(checkPal(v,v[j])){
                yes;
                return;
            }
            no;
            return;
        }
    }
    yes;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

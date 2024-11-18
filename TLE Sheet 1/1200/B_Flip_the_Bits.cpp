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
    string s,t;
    cin>>s>>t;
    if(s==t){
        yes;
        return;
    }
    int noo=0,nzz=0;
    for(int a=0;a<n;a++){
        if(s[a]=='0')nzz++;
        else noo++;
    }
    int shift=0;
    for(int a=n-1;a>=0;a--){
        if(shift==0){
            if(s[a]==t[a]){
                if(s[a]=='0')nzz--;
                else noo--;
            }
            else{
                if(nzz==noo){
                    shift=1;
                    if(s[a]=='0')noo--;
                    else nzz--;
                }else{
                    no;
                    return;
                }
            }
        }
        else{
            if(s[a]!=t[a]){
                if(s[a]=='0')noo--;
                else nzz--;
            }
            else{
                if(nzz==noo){
                    shift=0;
                    if(s[a]=='0')nzz--;
                    else noo--;
                }
                else{
                    no;
                    return;
                }
            }
        }
    }
    yes;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

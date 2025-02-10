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
    int n,m,k;cin>>n>>m>>k;
    if(abs(n-m)>k){
        cout<<-1<<nl;
    }
    else if(k>max(n,m)){
        cout<<-1<<nl;
    }
    else{
        string t="";
        int l,r;
        if(n>m){
            l=n;
            r=m;
        }
        else{
            l=m;r=n;
        }
        char bg,sm;
        if(l==n){
            bg='0';
            sm='1';
        }
        else{
            bg='1';
            sm='0';
        }
        while(k>0){
            t+=bg;
            k--;
            l--;
        }
        if(l<r){
            swap(l,r);
            swap(bg,sm);
        }
        else if(l==r){
            if(t.back()==bg){
                swap(bg,sm);
            }
        }
        while(t.size()<n+m){
            if(l>0){
                t+=bg;
                l--;
            }
            if(t.size()==n+m)break;
            if(r>0){
                t+=sm;
                r--;
            }
        }
        cout<<t<<nl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

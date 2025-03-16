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
    int n,m;cin>>n>>m;
    vector<string>vs(n);
    for(int a=0;a<n;a++){
        cin>>vs[a];
    }
    vi r(n),c(m);
    if(n==1){
        int sum=0;
        for(int a=0;a<m;a++){
            sum+=vs[0][a]-'0';
        }
        cout<<sum<<nl;
        return;
    }
    else if(m==1){
        int sum=0;
        for(int a=0;a<n;a++){
            sum+=vs[a][0]-'0';
        }
        cout<<sum<<nl;
        return;
    }
    for(int a=0;a<n;a++){
        int num=0;
        for(int b=0;b<m;b++){
            num^=vs[a][b]-'0';
        }
        r[a]=num;
    }
    for(int a=0;a<m;a++){
        int num=0;
        for(int b=0;b<n;b++){
            num^=vs[b][a]-'0';
        }
        c[a]=num;
    }
    int cnt=0;
    for(int a=0;a<n;a++){
        if(r[a]){
            for(int b=0;b<m;b++){
                if(c[b]){
                    c[b]=0;
                    break;
                }
            }
            r[a]=0;
            cnt++;
        }
    }
    for(int a=0;a<m;a++){
        if(c[a]){
            for(int b=0;b<n;b++){
                if(r[b]){
                    r[b]=0;
                    break;
                }
            }
            c[a]=0;
            cnt++;
        }
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

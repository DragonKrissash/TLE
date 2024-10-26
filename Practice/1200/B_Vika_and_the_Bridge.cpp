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

bool check(int step,int k,vi &v){
    int po=step;
    int col=v[po];
    int y=1;
    int n=v.size();
    while(po<n){
        if(col!=v[po]){
            if(y){
                y=0;
            }
            else{
                return 0;
            }
        }
        po+=step+1;
    }
    return 1;
}

void solve(){
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    vi last(k,-1);
    vi max1(k),max2(k);
    for(int a=0;a<n;a++){
        int step=a-last[v[a]-1];
        if(step>max1[v[a]-1]){
            max2[v[a]-1]=max1[v[a]-1];
            max1[v[a]-1]=step;
        }
        else if(step>max2[v[a]-1])
        max2[v[a]-1]=step;
        last[v[a]-1]=a;
    }
    for(int a=0;a<k;a++){
        int step=n-last[a];
        if(step>max1[a]){
            max2[a]=max1[a];
            max1[a]=step;
        }
        else if(step>max2[a])
        max2[a]=step;

    }
    int ans=1e9;
    for(int a=0;a<k;a++){
        ans=min(ans,max((max1[a]+1)/2,max2[a]));
    }
    cout<<ans-1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
    int n,m,x;cin>>n>>m>>x;
    vi v(n);
    input(v);
    vi pre(n),suf(n);
    int sum=0;
    for(int a=0;a<n;a++){
        sum+=v[a];
        if(sum>=x){
            pre[a]=(a>0)? pre[a-1]+1:1;
            sum=0;
        }
        else pre[a]=(a>0)? pre[a-1]:0;
        pre[a]=min(pre[a],m);
    }
    sum=0;
    for(int a=n-1;a>=0;a--){
        sum+=v[a];
        if(sum>=x){
            suf[a]=(a<n-1)? suf[a+1]+1:1;
            sum=0;
        }
        else suf[a]=(a<n-1)? suf[a+1]:suf[a];
        suf[a]=min(suf[a],m);
    }
    // for(int a=0;a<n;a++)cout<<pre[a]<<sp;
    // cout<<nl;
    // for(int a=0;a<n;a++)cout<<suf[a]<<sp;
    // cout<<nl;
    // cout<<nl;
    vi sums(n);
    sums[0]=v[0];
    for(int a=1;a<n;a++){
        sums[a]=sums[a-1]+v[a];
    }
    int ans=-1;
    vi suf2=suf;
    reverse(all(suf2));
    // for(int a=0;a<n;a++)
    // cout<<suf2[a]<<sp;
    // cout<<nl;
    for(int a=0;a<n;a++){
        int tar=m-pre[a];
        int ind=upper_bound(all(suf2),tar)-suf2.begin();
        ind--;
        if(pre[a]+suf2[ind]==m){
            ind=n-1-ind;
            if(tar==0){
                ans=max(ans,sums[n-1]-sums[a]);
            }
            else if(tar==m){
                ans=max(ans,sums[ind-1]);
            }
            else
            ans=max(ans,sums[ind-1]-sums[a]);
        }
    }
    cout<<ans<<nl;
    // cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

int expo(int base,int po){
    int res=1;
    while(po>0){
        if(po&1)res*=base;
        po=po>>1;
        base*=base;
    }
    return res;
}

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    vi spf(2e5+1);
    for(int a=1;a<=2e5;a++)
    spf[a]=a;
    for(int a=2;a<=2e5;a++){
        if(spf[a]==a){
            for(int b=a*a;b<=2e5;b+=a){
                if(spf[b]==b)spf[b]=a;
            }
        }
    }
    vector<multiset<int>> prime(2e5+1);
    for(int a=0;a<n;a++){
        int x=v[a];
        while(x>1){
            int cnt=0,y=spf[x];
            while(x%y==0)cnt++,x/=y;
            prime[y].insert(cnt);
        }
    }
    int ans=1;
    // for(int a=2;a<=2e5;a++){
    //     if(prime[a].size()){
    //         cout<<a<<" : ";
    //         for(int i:prime[a]){
    //             cout<<i<<sp;
    //         }
    //         cout<<nl;
    //     }
    // }
    for(int a=2;a<=2e5;a++){
        if(prime[a].size()){
            if(prime[a].size()==n){
                auto it=prime[a].begin();
                it++;
                int num=*it;
                // cout<<num<<nl;
                ans*=expo(a,num);
            }
            else if(prime[a].size()==n-1){
                int num=*(prime[a].begin());
                // cout<<num<<nl;
                ans*=expo(a,num);
            }
        }
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

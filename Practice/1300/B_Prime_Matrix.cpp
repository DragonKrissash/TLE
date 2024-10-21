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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

int isPrime[(int)1e5+10];
vi primes;
void buildSieve(){
    memset(isPrime,1,sizeof(isPrime));
    isPrime[0]=isPrime[1]=0;
    for(int a=2;a<=1e5+9;a++){
        if(isPrime[a]){
            primes.push_back(a);
            for(int b=a*a;b<=1e5+9;b+=a){
                isPrime[b]=0;
            }
        }
    }
}

void solve(){
    buildSieve();
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++)
        cin>>arr[a][b];
    }
    vi ans;
    for(int a=0;a<n;a++){
        int sum=0;
        for(int b=0;b<m;b++){
            if(isPrime[arr[a][b]])continue;
            else{
                auto it=upper_bound(all(primes),arr[a][b]);
                sum+=max(0LL,*it-arr[a][b]);
            }
        }
        ans.push_back(sum);
    }
    for(int a=0;a<m;a++){
        int sum=0;
        for(int b=0;b<n;b++){
            if(isPrime[arr[b][a]])continue;
            else{
                auto it=upper_bound(all(primes),arr[b][a]);
                sum+=max(0LL,*it-arr[b][a]);
            }
        }
        ans.push_back(sum);
    }
    // for(int a=0;a<ans.size();a++){
    //     cout<<ans[a]<<sp;
    // }
    cout<<*mn(ans)<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

const int N=1e7+1;
int spf[N];
void solve(){
    for(int a=1;a<N;a++){
        spf[a]=a;
    }
    for(int a=2;a<N;a++){
        if(spf[a]==a){
            for(int b=a*a;b<=N;b+=a){
                if(spf[b]==b)spf[b]=a;
            }
        }
    }

    int n,m;cin>>n>>m;
    vi ai,bi;
    map<int,int>mp1,mp2,mp3;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        ai.pb(x);
        int cnt=0;
        while(x>1){
            int y=spf[x];
            cnt=0;
            while(x%y==0){
                cnt++;
                x/=y;
            }
            mp1[y]+=cnt;
        }
    }
    for(int a=0;a<m;a++){
        int x;cin>>x;
        bi.pb(x);
        int cnt=0;
        while(x>1){
            int y=spf[x];
            cnt=0;
            while(x%y==0){
                cnt++;
                x/=y;
            }
            mp2[y]+=cnt;
        }
    }
    for(auto [k,val]:mp1){
        mp3[k]=min(mp1[k],mp2[k]);
    }
    mp1=mp2=mp3;
    for(int a=0;a<n;a++){
        int x=ai[a];
        int cnt=0;
        while(x>1){
            int y=spf[x];
            cnt=0;
            while(x%y==0){
                cnt++,x/=y;
            }
            cnt=min(cnt,mp1[y]);
            mp1[y]-=cnt;
            while(cnt--)ai[a]/=y;
        }
    }
    for(int a=0;a<m;a++){
        int x=bi[a];
        int cnt=0;
        while(x>1){
            int y=spf[x];
            cnt=0;
            while(x%y==0){
                cnt++;
                x/=y;
            }
            cnt=min(cnt,mp2[y]);
            mp2[y]-=cnt;
            while(cnt--)bi[a]/=y;
        }
    }
    cout<<n<<sp<<m<<nl;
    for(auto i:ai)cout<<i<<sp;
    cout<<nl;
    for(auto i:bi)cout<<i<<sp;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

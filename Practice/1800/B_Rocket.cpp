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

int que(int n){
    cout<<n<<endl;
    int x;cin>>x;
    if(x==0)
    exit(0);
    return x;
}

void solve(){
    int m,n;cin>>m>>n;
    vi v(n);
    for(int a=0;a<n;a++){
        int rep=que(1);
        if(rep==0){
            // cout<<1<<nl;
            exit(0);
        }
        else if(rep==-1){
            v[a]=0;
        }
        else v[a]=1;
    }
    int l=2,r=m;
    int ind=0;
    while(l<=r){
        int mid=(l+r)/2;
        int rep=que(mid);
        if(!v[ind]){
            rep*=-1;
        }
        if(rep==1){
            l=mid+1;
        }
        else r=mid-1;
        ind=(ind+1)%n;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

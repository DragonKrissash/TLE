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

void solve(){
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    int mood=0,ind=0,ans=1e9,cnt=0;
    int sum=sm(v);
    int num=k/sum;
    k=k%sum;
    for(int i=0,j=0,a=1;a<=2*n;a++){
        mood+=v[j];
        cnt++;
        if(mood>=k){
            while(mood>=k){
                if(cnt<ans){
                    ans=cnt;
                    ind=i;
                }
                mood-=v[i];
                cnt--;
                i++;
                i=i%n;
            }
            // ind=i;
        }
        j++;
        j=j%n;
    }
    cout<<ind+1<<sp<<ans+n*num<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

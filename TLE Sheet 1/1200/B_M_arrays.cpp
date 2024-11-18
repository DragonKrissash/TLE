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
    int n,m;
    cin>>n>>m;
    vi v(n);
    input(v);
    map<int,int>mp;
    for(int a=0;a<n;a++){
        mp[v[a]%m]++;
    }
    int cnt=0;
    set<int>st;
    for(auto [k,val]:mp){
        if(st.count(k))continue;
        if(k==0)cnt++;
        else{
            if(mp.count(m-k)){
                if(val==mp[m-k] or (val+1)==mp[m-k] or val==(mp[m-k]+1)){
                    cnt++;
                }
                else{
                    cnt++;
                    cnt=cnt+max(val,mp[m-k])-min(val,mp[m-k])-1;
                }
                st.insert(m-k);
            }
            else{
                cnt+=val;
            }
        }
        // cout<<k<<sp<<val<<sp<<cnt<<nl;
    }
    cout<<cnt<<nl;
}




// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

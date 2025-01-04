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
    string s;cin>>s;
    int k;cin>>k;
    int n=s.size();
    deque<int>num[10];
    string t="";
    for(int a=0;a<n;a++)num[s[a]-'0'].pb(a);
    for(int a=0;a<n;a++){
        int cur=n,ne=n;
        for(int b=0;b<10;b++)
        if(num[b].size())
        cur=min(cur,num[b].front());

        for(int b=(a==0);b<10;b++){
            if(num[b].size() and num[b].front()-cur<=k){
                t+=('0'+b);
                ne=num[b].front();
                break;
            }
        }
        k-=ne-cur;
        for(int b=0;b<10;b++){
            while(num[b].size() and num[b].front()<=ne)num[b].pop_front();
        }
    }
    cout<<string(t.begin(),t.end()-k)<<nl;
}
    



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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

void solve(){
    map<string,int>mp;
    int n;cin>>n;
    vector<string>s(2);
    cin>>s[0]>>s[1];
    int ind=n-1;
    bool fn=0;
    for(int a=1;a<n;a++){
        if(s[0][a]=='1' and s[1][a-1]=='0'){
            fn=1;
            ind=a;break;
        }
    }
    if(fn)ind--;
    ind=max(0LL,ind);
    string ans="";
    for(int a=0;a<=ind;a++)
    ans+=s[0][a];
    for(int a=ind;a<=n-1;a++)
    ans+=s[1][a];
    int cnt=0;
    while(ind>=0){
        if(s[0][ind]==s[1][ind-1])
        {
            cnt++;
        }
        else break;
        ind--;
    }
    cout<<ans<<nl<<cnt+1<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

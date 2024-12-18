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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    vi pos[26];
    int ans=0;
    for(int a=0;a<n;a++){
        pos[s[a]-'a'].pb(a);
    }
    for(int a=0;a<26;a++){
        int res=0;
        for(int d=1;d<n;d++){
            int sum=0;
            vi cnt(26);
            for(int x:pos[a]){
                char ch=s[(x+d)%n];
                cnt[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                if(cnt[i]==1)sum++;
            }
            res=max(res,sum);
        }
        ans+=res;
    }
    cout<<setprecision(15)<<fixed<<(double)ans/n<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

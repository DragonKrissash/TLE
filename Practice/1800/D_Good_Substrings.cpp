//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
// #define int long long
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

void solve(){
    string s;cin>>s;
    string isBad;cin>>isBad;
    int k;cin>>k;
    int base[2]={53,127};
    int MOD[2]={1000000007,1000000009};
    int n=s.size();
    set<pair<int,int>>st;
    for(int a=0;a<n;a++){
        int hash[2]={0,0};
        int po[2]={1,1};
        int nb=0;
        for(int j=a;j<n;j++){
            if(isBad[s[j]-'a']=='0'){
                nb++;
            }
            if(nb>k)break;
            for(int l=0;l<2;l++){
                hash[l]=(hash[l]+s[j]*po[l])%MOD[l];
                po[l]=(po[l]*base[l])%MOD[l];
            }
            st.insert({hash[0],hash[1]});
            
        }
    }
    cout<<st.size()<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

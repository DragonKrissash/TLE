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

struct HASH{
    vi h1,h2,p1,p2;
    const int mod=1e9+7,b1=31,b2=37;
    HASH(string s){
        int n=s.size();
        h1.resize(n+1);
        h2.resize(n+1);
        p1.resize(n+1,1);
        p2.resize(n+1,1);
        for(int a=0;a<n;a++){
            h1[a+1]=(h1[a]*b1+(s[a]-'a'+1))%mod;
            h2[a+1]=(h2[a]*b2+(s[a]-'a'+1))%mod;
            p1[a+1]=(p1[a]*b1)%mod;
            p2[a+1]=(p2[a]*b2)%mod;
        }
    }
    vector<int> get(int l,int r){
        l++;r++;
        int ha=(h1[r]-(h1[l-1]*p1[r-l+1])%mod+mod)%mod;
        int hb=(h2[r]-(h2[l-1]*p2[r-l+1])%mod+mod)%mod;
        return {ha,hb};
    }
};

int f(string &s,HASH &h,int l){
    unordered_set<int>st;
    int n=s.size();
    // cout<<l<<sp;
    for(int a=0;a<=n-l;a++){
        vector<int> has=h.get(a,a+l-1);
        int hh=has[0]*(1e9+21)+has[1];
        if(st.count(hh))return a;
        st.insert(hh);
    }
    return -1;
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    HASH h(s);
    int ans=-1;
    int ind=-1;
    int l=1,r=n;
    while(l<=r){
        int mid=(l+r)/2;
        int res=f(s,h,mid);
        if(res!=-1){
            ans=mid;l=mid+1;
            ind=res;
        }
        else r=mid-1;
    }
    if(ind==-1)cout<<ind<<nl;
    else
    cout<<s.substr(ind,ans)<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

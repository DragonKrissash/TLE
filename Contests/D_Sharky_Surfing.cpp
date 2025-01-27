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
    int n,m,l;
    cin>>n>>m>>l;
    vector<pii>pos(n);
    for(int a=0;a<n;a++){
        cin>>pos[a].X>>pos[a].Y;
    }
    vector<pii>pow(m);
    for(int a=0;a<m;a++){
        cin>>pow[a].X>>pow[a].Y;
    }
    multiset<int>st;
    int ind=0,pr=1,cnt=0;
    for(auto i:pos){
        int l=i.X,r=i.Y,jum=r-l+1;
        while(ind<m and pow[ind].X<=l-1){
            st.insert(pow[ind++].Y);
        }
        while(pr<=jum){
            if(st.empty()){
                cout<<-1<<nl;
                return;
            }
            int rn=*st.rbegin();
            st.erase(st.find(*st.rbegin()));
            pr+=rn;
            cnt++;
        }
    }
    cout<<cnt<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

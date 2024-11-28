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

int que(int l,int r){
    cout<<"? "<<l<<sp<<r<<endl;
    int x;cin>>x;
    return x;
}

void solve(){
    int n,m;cin>>n>>m;
    int d=que(1,1);
    if(d==0){
        cout<<"! "<<1<<sp<<1<<endl;
        return;
    }
    int x1,y1,x2,y2;
    x1=min(1+d,n);
    y1=d-x1+2;
    y2=min(1+d,m);
    x2=d-y2+2;
    d=que(x1,y1);
    if(d==0){
        cout<<"! "<<x1<<sp<<y1<<endl;
        return;
    }
    if(d&1){
        d=que(x2,y2);
        cout<<"! "<<x2+d/2<<sp<<y2-d/2<<endl; 
    }
    else{
        int nx=x1-d/2;
        int ny=y1+d/2;
        d=que(nx,ny);
        if(d==0){
            cout<<"! "<<nx<<sp<<ny<<endl;
            return;
        }
        else{
            d=que(x2,y2);
            cout<<"! "<<x2+d/2<<sp<<y2-d/2<<endl;
        }
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

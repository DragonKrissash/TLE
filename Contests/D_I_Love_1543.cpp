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
    int n,m;cin>>n>>m;
    vector<string>arr(n);
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    vector<vi>modarr;
    int cnt=0;
    int i=0,j=0;
    int rowind=0,colind=0;
    int rowback=n-1,colback=m-1;
    while(cnt<n*m){
        vi v;
        i=rowind;
        j=colind;
        //right
        while(j<=colback)
        {
            v.pb(arr[i][j]-'0');
            j++;   
            cnt++; 
        }
        j--;
        i++;
        //down
        while(i<=rowback){
            v.pb(arr[i][j]-'0');
            i++;
            cnt++;
        }
        i--;
        j--;
        //left
        while(j>=colind){
            v.pb(arr[i][j]-'0');
            j--;
            cnt++;
        }
        j++;
        i--;
        //up
        while(i>rowind){
            v.pb(arr[i][j]-'0');
            i--;
            cnt++;
        }
        i++;
        modarr.pb(v);
        rowind++;
        colind++;
        rowback--;
        colback--;
    }   
    int ans=0;
    for(int a=0;a<modarr.size();a++){
        int sz=modarr[a].size();
        for(int b=0;b<sz;b++){
            if(modarr[a][b%sz]==1 and modarr[a][(b+1)%sz]==5 and modarr[a][(b+2)%sz]==4 and modarr[a][(b+3)%sz]==3)
            ans++; 
        }
        // cout<<nl;
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

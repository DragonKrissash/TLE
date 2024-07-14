#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n,0);
    input(v);
    if(n==1)
    {cout<<0<<nl;
    return;}
    bool strictInc=true;
    for(int a=0;a<n-1;a++){
        if(v[a]>=v[a+1]){
            strictInc=false;
            break;
        }
    }
    if(strictInc==true)cout<<0<<nl;
    else{
        int cnt=0;
        for(int a=n-2;a>=0;a--){
            if(v[a]>=v[a+1]){
                if(v[a+1]==0)
                {
                    cout<<-1<<nl;
                    return;
                }
                while(v[a]>=v[a+1]){
                    v[a]/=2;
                    cnt++;
                }
            }
        }
        cout<<cnt<<nl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
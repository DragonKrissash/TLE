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
    vector<int>v(n,0);
    int twoCnt=0;
    for(int a=0;a<n;a++){
        cin>>v[a];
        if(v[a]==2)
        twoCnt++;
    }
    if(twoCnt%2==1)
    cout<<-1<<nl;
    else{
        int cnt=0;
        for(int a=0;a<n;a++){
            if(v[a]==2)
            cnt++;
            if(cnt*2==twoCnt){
                cout<<a+1<<nl;
                return;
            }
        }
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    vi v(n);
    input(v);
    if(n==1){
        cout<<1<<nl;
        cout<<v[0]<<nl;
        return;
    }
    bool y=true;
    for(int a=0;a<n;a++){
        if(v[a]!=0){
            y=false;
            break;
        }
    }
    if(y){cout<<0<<nl<<nl;return;}
    int maxEle=INT_MIN;
    int minEle=INT_MAX;
    for(int a=0;a<n;a++){
        maxEle=max(maxEle,v[a]);
        minEle=min(minEle,v[a]);
    }
    vector<int>ans;
    for(int a=1;a<=40;a++){
        int avg=(maxEle+minEle)/2;
        maxEle=INT_MIN;
        minEle=INT_MAX;
        ans.push_back(avg);
        for(int a=0;a<n;a++){
            v[a]=abs(v[a]-avg);
            maxEle=max(maxEle,v[a]);
            minEle=min(minEle,v[a]);
        }
        if(maxEle==0 and minEle==0){
            cout<<ans.size()<<nl;
            for(int b=0;b<ans.size();b++){
                cout<<ans[b]<<" ";
            }
            cout<<nl;
            return;
        }
    }
    cout<<-1<<nl;

}   

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string s;cin>>s;
    int n=s.size();
    int one=0,zer=0;
    if(n==1){
        cout<<1<<nl;
        return;
    }
    for(int a=0;a<n;a++){
        if(s[a]=='1')one++;
        else zer++;
    }
    if(zer==one){
        cout<<0<<nl;
        return;
    }
    for(int a=0;a<n;a++){
        if(s[a]=='1')zer--;
        else one--;
        if(zer<0 and one>0){
            cout<<one<<nl;
            return;
        }else if(one<0 and zer>0)
        {
            cout<<zer<<nl;
            return;
        }else {

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
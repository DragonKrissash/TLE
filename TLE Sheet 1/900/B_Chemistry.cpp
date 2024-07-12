#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;cin>>n>>k;
    string word;cin>>word;
    map<char,int>mp;
    int odcnt=0;
    for(int a=0;a<n;a++){
        mp[word[a]]++;
    }
    for(auto val:mp){
        if(val.second%2==1)
        odcnt++;
    }
    if(odcnt==k || odcnt==k+1)cout<<"YES"<<nl;
    else if(odcnt>k+1) cout<<"NO"<<nl;
    else{
        cout<<"YES"<<nl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
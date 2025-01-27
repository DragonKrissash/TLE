#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

using namespace std;
using namespace std::chrono;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    sort(all(s));
    string ans="";
    deque<char>dq;
    for(int a=0;a<n;a++){
        dq.push_back(s[a]);
    }
    while(!dq.empty()){
        ans+=dq.front();
        dq.pop_front();
        if(dq.empty())break;
        ans+=dq.back();
        dq.pop_back();
    }
    cout<<ans<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}



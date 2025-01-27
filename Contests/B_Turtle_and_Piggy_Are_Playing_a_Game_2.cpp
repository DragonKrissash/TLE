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
    vi v(n);input(v);
    deque<int>q;
    sort(all(v));
    for(int a=0;a<n;a++){
        q.push_back(v[a]);
    }
    
    while(q.size()>1){
        q.pop_front();
        if(q.size()==1)break;
        q.pop_back();
    }
    cout<<q.front()<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}


#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool check(vector<int>&v){
    int n=v.size();
    bool y=true;
    for(int a=0;a<n-1;a++)
    if(v[a]>=v[a+1])y=false;
    return y;
}

bool checkZero(vector<int>&v){
    int n=v.size();
    for(int a=0;a<n-1;a++){
        if(v[a]==0 && v[a+1]==0)
        return true;
    }
    return false;
}

void solve(){
    int n;cin>>n;
    bool y=false;
    vi v(n,0);int cnt=0;
    for(int a=0;a<n;a++)cin>>v[a];
    while(true){
        for(int a=0;a<n-1;a++){
            if(v[a]>=v[a+1])
            {v[a]=v[a]/2;
            cnt++;}
        }
        if(check(v))
        break;
        if(checkZero(v))
        {
            y=true;break;
        }
    }
    if(y)cout<<-1<<endl;
    else cout<<cnt<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
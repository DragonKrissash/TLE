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
    int n,r,b;cin>>n>>r>>b;
    int tempr=r;
    int temp=(r+b)/(b+1);
    int temp2=n-temp*(b+1);
    string s="";
    for(int a=0;a<b;a++){
        if(temp2){
            temp2--;
        }
        else{
            if(temp2==0){
                temp--;
                temp2=-1;
            }
        }
        for(int j=0;j<min(temp,r);j++){
            s+="R";
            tempr--;
        }
        r=tempr;
        s+="B";
    }
    while(tempr>0){
        s+="R";
        tempr--;
    }
    cout<<s<<nl;
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
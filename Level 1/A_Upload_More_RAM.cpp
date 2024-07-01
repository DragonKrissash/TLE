#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k;
    cin>>n>>k;
    int space=0;
    int time=0;
    for(int a=1;a<n;a++){
        for(int b=1;b<=k;b++){
            if(b==1)
            space++;  
            time++;  
        }
    }
    cout<<time+1<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
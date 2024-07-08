#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    vector<vector<char>>v(10,vector<char>(10,'.'));
    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            cin>>v[a][b];
        }
    }
    int ans=0;
    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            if(v[a][b]=='X'){
                int r=a+1;
                int c=b+1;
                if(r<=5 and c<=5){
                    ans+=min(r,c);
                }
                else if(r>5 and c<=5)
                ans+=min(11-r,c);
                else if(r<=5 and c>5)
                ans+=min(r,11-c); 
                else 
                ans+=min(11-r,11-c);
                
            }
        }
    }
    cout<<ans<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
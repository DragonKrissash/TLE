#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int longSeq=0;
    int shortSeq=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        if(x==0){
            shortSeq++;
        }else{
            longSeq=max(longSeq,shortSeq);
            shortSeq=0;
        }
    }
    longSeq=max(longSeq,shortSeq);
    cout<<longSeq<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
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
    int a,b;cin>>a>>b;
    if(a<b){
        cout<<1<<nl;
    }
    else{
        int opr=0;
        int minopr=INT_MAX;
        int t=b;
        int y=a;
        for(int t=0;t<=sqrt(y);t++){
            opr=t;
            if(b==1 and t==0)
            continue;
            a=y;
            while(a>0){
                a/=(b+t);
                opr++;
            }
            minopr=min(minopr,opr);
        }
    cout<<minopr<<nl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
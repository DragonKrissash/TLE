#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<0<<nl;
        return;
    }
    else if(n%10 == 5){
        cout<<-1<<nl;
        return;
    }
    else{
        bool y=true;
        int opr=0;
        while(true){
            if(n==2 || n==4){
                y=false;
                break;
            }
            else if(n%6==0){
                while(n%6==0){
                    n/=6;
                    opr++;
                }
                if(n==1)break;
            }
            else if(n%3==0){
                n*=2;
                opr++;
            }
            else {
                y=false;
                break;
            }
        }
        if(y)cout<<opr<<nl;
        else cout<<-1<<nl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
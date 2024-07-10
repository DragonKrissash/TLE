#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(d<b)cout<<-1<<endl;
    else{
        int m1=d-b;
        if(c>a+m1)
        cout<<-1<<endl;
        else{
            a=a+m1;
            int m2=a-c;
            cout<<m2+m1<<endl;
        }
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int neg=0,pos=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        if(x<0)neg++;
        else pos++;
    }
    int cnt=0;
    if(neg==pos){
        if(neg%2==0)cout<<0<<endl;
        else{
            cout<<1<<endl;
        }
    }
    else if(pos>neg){
        if(neg%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        int dif=(neg-pos+1)/2;
        neg=neg-dif;
        if(neg%2==0)cout<<dif<<endl;
        else cout<<dif+1<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
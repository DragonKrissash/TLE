#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int h1,h2,l1,l2;
        if(a>b){
            h1=a;l1=b;
        }
        else{
            h1=b;l1=a;
        }
        if(c>d){
            h2=c;l2=d;
        }
        else{
            h2=d;l2=c;
        }
        if((h1<l2)||(h2<l1))
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
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
        vector<int>v(3,0);
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end());
        if(x==y and y==z)cout<<0<<endl;
        else if(x==y)cout<<abs(y-z)<<endl;
        else if(y==z)cout<<abs(x-z)<<endl;
        else if(z==x)cout<<abs(x-y)<<endl;
        else{
            int a=max(x,max(y,z));
            int c=min(x,min(y,z));
            int b=x+y+z-a-c;
            cout<<abs(a-b)+abs(b-c)<<endl;

            // if(x>y){
            //     if(y>z)cout<<abs(y-z)+abs(x-y)<<endl;
            //     else cout<<abs(z-x)+abs(z-y)<<endl;
            // }
            // else{
            //     if(x>z)cout<<abs(x-y)+abs(x-z)<<endl;
            //     else cout<<abs(z-x)+abs(z-y)<<endl;
            // }
        }
    }
}
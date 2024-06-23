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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        if(2*k+1 >n)
        cout<<"NO"<<endl;
        else{
            bool y=true;
            for(int a=0;a<k;a++){
                if(s[a]==s[n-1-a])
                continue;
                else {
                    y=false;break;
                }
            }
            if(y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
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
        string s;cin>>s;
        int i=s.find("11");
        int j=s.rfind("00");
        if(i!=-1 && j!=-1 && i<j)
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
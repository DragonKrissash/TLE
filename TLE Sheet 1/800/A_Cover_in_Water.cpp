#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int conWhit=0;
    for(int a=0;a<n-1;a++){
        if(s[a]=='.' and s[a-1]=='.' and s[a+1]=='.')
        {
            conWhit=3;break;
        }
    }
    if(conWhit>=3)cout<<2<<endl;
    else{
        conWhit=0;
        for(int a=0;a<n;a++)
        if(s[a]=='.')
        conWhit++;
        cout<<conWhit<<endl;
    }

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
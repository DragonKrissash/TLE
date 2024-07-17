#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string s;cin>>s;
    int n=s.size();
    int maxLen=0,len=0,cursum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            cursum=0;
            len=0;
            int j=i;
            for(j=i;j<n;j++){
                if(s[j]=='<')cursum++;
                else{
                    len+=2;
                    cursum--;
                }
                if(cursum==0 || cursum==-1)break;
            }
            if(cursum==-1){
                break;
            }
            if(len>maxLen){
                maxLen=len;
            }
            i=j-1;
        }
    }
    cout<<maxLen<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
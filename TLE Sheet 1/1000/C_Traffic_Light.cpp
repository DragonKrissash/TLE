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
    int n;cin>>n;
    char c;cin>>c;
    string s;cin>>s;
    if(c=='g'){
        cout<<0<<nl;
        return;
    }
    int first=-1;
    for(int a=0;a<n;a++){
        if(s[a]=='g'){
        first=a;
        break;
        }
    }
    int flag=0;
    int cnt=0;
    int maxcnt=0;
    for(int a=0;a<n;a++){
        if(s[a]==c){
            cnt=0;flag=0;
            for(int b=a+1;b<n;b++){
                cnt++;
                if(s[b]=='g')
                {
                    flag++;
                    break;
                }
            }
            a+=cnt;
            if(flag){
                maxcnt=max(maxcnt,cnt);
            }
            else{
                maxcnt=max(maxcnt,cnt+1+first);
            }
        }
    }
    cout<<maxcnt<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
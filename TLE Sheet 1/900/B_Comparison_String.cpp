#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;string s;cin>>n>>s;
    if (n==1)cout<<2<<nl;
    else{
        int maxgreCnt=0;
        int maxlesCnt=0;
        int lessCnt=1;
        int greCnt=1;
        for(int a=1;a<n;a++){
            if(s[a]=='>'){
                if(s[a-1]=='<'){
                    maxgreCnt=max(maxgreCnt,greCnt);
                    greCnt=1;
                }
                else greCnt++;
            } 
            else{
                if(s[a-1]=='<')lessCnt++;
                else{
                    maxlesCnt=max(maxlesCnt,lessCnt);
                    lessCnt=1;
                }
            }
        }
        maxlesCnt=max(maxlesCnt,lessCnt);
        maxgreCnt=max(maxgreCnt,greCnt);
        cout<<max(maxlesCnt,maxgreCnt)+1<<nl;
    }
    
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
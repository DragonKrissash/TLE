#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int fences(int a,int b,vector<vector<int>>&area){
    int cnt=0;
    if(a==0 and b==0){
        cnt+=2;
        if(area[a+1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
    }
    else if(a==0 and b==area[0].size()-1){
        cnt+=2;
        if(area[a+1][b]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    else if(a==area.size()-1 and b==0){
        cnt+=2;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
    }
    else if(a==area.size()-1 and b==area[0].size()-1){
        cnt+=2;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    else if(a==0){
        cnt++;
        if(area[a+1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    else if(a==area.size()-1){
        cnt++;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    else if(b==0){
        cnt++;
        if(area[a+1][b]==0)cnt++;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
    }
    else if(b==area[0].size()-1){
        cnt++;
        if(area[a+1][b]==0)cnt++;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    else{
        if(area[a+1][b]==0)cnt++;
        if(area[a-1][b]==0)cnt++;
        if(area[a][b+1]==0)cnt++;
        if(area[a][b-1]==0)cnt++;
    }
    return cnt;
}

void solve(){
    int n,m;
    cin>>n>>m;
    int k;cin>>k;
    vector<vector<int>>area(n,vector<int>(m,0));
    for(int a=0;a<k;+a++){
        int x,y;cin>>x>>y;
        area[x-1][y-1]=1;
    }
    int ans=0;
    for(int a=0;a<n;+a++){
        for(int b=0;b<m;b++){
            if(area[a][b]==1){
                ans+=fences(a,b,area);
            }
        }
    }
    cout<<ans<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
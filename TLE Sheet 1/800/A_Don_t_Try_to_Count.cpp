#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

bool check(string xw,string sw){
    int a=0,b=0;
    if(xw.length()<sw.length())return false;
    bool y=true;
    for(int a=0;a<xw.size();a++){
        if(b==sw.length())break;
        if(xw[a]==sw[b]){
            b++;
        }
        else{
            b=0;
        }
    }
    // cout<<sw<<" "<<b<<endl;
    return b==sw.length();
}

void solve(){
    int x,y;
    cin>>x>>y;
    string xw,sw;cin>>xw>>sw;
    int cnt=0;
    if(xw==sw)cout<<0<<endl;
    else{
        bool y=false;
        for(int a=0;a<=5;a++){
            if(xw.find(sw)!=string::npos){
                y=true;
                cout<<a<<endl;
                break;
            }
            xw+=xw;
        }
        if(!y)cout<<-1<<endl;
    }
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
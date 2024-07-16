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
    int n=s.length();
    int zeros=0;
    // zeros
    bool y_zeros=false;
    for(int a=n-1;a>=0;a--){
        if(s[a]=='0' and y_zeros==false){
            y_zeros=true;
        }
        else if(s[a]=='0' and y_zeros==true){
            break;
        }
        else zeros++;
    }
    // 25
    int tw5=0;
    bool y_25=false;
    for(int a=n-1;a>=0;a--){
        if(s[a]=='5' and y_25==false){
            y_25=true;
        }
        else if(s[a]=='2' and y_25==true){
            break;
        }
        else tw5++;
    }
    // 50
    int ft5=0;
    bool y_50=false;
    for(int a=n-1;a>=0;a--){
        if(s[a]=='0' and y_50==false){
            y_50=true;
        }
        else if(s[a]=='5' and y_50==true){
            break;
        }
        else ft5++;
    }
    // 75
    int se5=0;
    bool y_75=false;
    for(int a=n-1;a>=0;a--){
        if(s[a]=='5' and y_75==false){
            y_75=true;
        }
        else if(s[a]=='7' and y_75==true){
            break;
        }
        else se5++;
    }
    cout<<min({se5,tw5,zeros,ft5})<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
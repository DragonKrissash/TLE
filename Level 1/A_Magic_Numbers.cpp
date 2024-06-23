#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int main()
{
   fastio
    string s;cin>>s;
    vector<string>v={"1","14","144"};
    bool y=true;
    for(int a=0;a<s.length();a++){
        if(s[a]=='1')
        continue;
        else if(s[a]=='4')
        {
            if(s[a-1]=='1')
            continue;
            else if(s[a-1]=='4' && s[a-2]=='1')
            continue;
            else if(s[a+1]=='4' && s[a-1]=='1')
            continue;
            else {
                y=false;
                break;
            }
        }
        else{
            y=false;
            break;
        }
    }
    if(y)cout<<"YES";
    else cout<<"NO";

}
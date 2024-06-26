#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool checkVow(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
    return true;
    else return false;
}

int main()
{
   fastio
    string s;cin>>s;
    string t="";
    for(int a=0;a<s.size();a++){
        char c=(char)tolower(s[a]);
        if(checkVow(c))continue;
        else t=t+"."+c;
    }
    cout<<t<<endl;
}
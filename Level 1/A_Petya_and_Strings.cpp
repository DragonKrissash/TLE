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
    string s1,s2;cin>>s1>>s2;
    bool y=false;int a=0;
    for(int a=0;a<s1.size();a++)s1[a]=tolower(s1[a]);
    for(int a=0;a<s2.size();a++)s2[a]=tolower(s2[a]);
    if(s1==s2)cout<<0<<endl;
    else if(s1<s2)cout<<-1<<endl;
    else cout<<1<<endl;
}
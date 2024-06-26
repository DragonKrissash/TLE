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
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
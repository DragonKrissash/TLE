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
   vector<int>v(14,0);
   for(int a=0;a<5;a++){
    int x;cin>>x;
    v[x]++;
   }bool y=false;
   for(int a=1;a<14;a++){
    for (int b=1;b<14;b++){
        if(v[a]==3 and v[b]==2)
        {y=true;break;}
    }
    if(y)break;
   }
   if(y)cout<<"Yes";
   else cout<<"No";
}
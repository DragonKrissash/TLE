#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define int long long
const int INF=LLONG_MAX>>1;
int n;
map<int,int>prev_val;
int query(int i){
    if(prev_val.find(i)!=prev_val.end())
    return prev_val[i];
    if(i==0 || i==n+1)
    {return INF;}
    cout<<"? "<<i<<endl;
    int x;
    cin>>x;
    return prev_val[i]=x;
}

signed main()
{   cin>>n;
    int lo=0,hi=n+1;
    while(hi-lo>1){
        int mid=(lo+hi)/2;
        // cout<<"QUERY: ";
        int x=query(mid);
        int y=query(mid+1);
        if(x<y)hi=mid;
        else lo=mid;
    }
    cout<<"! "<<hi<<endl;
}

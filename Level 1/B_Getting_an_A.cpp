#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool check(int no,int n,vector<int>&v){
    
}

int main()
{
   fastio
    int n;cin>>n;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    sort(all(v));
    for(int a=1;a<n;a++)v[a]=v[a]+v[a-1];
    double sum=0;
    for(int a=0;a<n;a++)sum+=v[a];
    sum=sum/n;
    if(round(sum)==5)cout<<0;
    else{
        int cnt=0;
        int l=0,r=n;
        while(r-l>1){
            int mid=(l+r)/2;
            if(check(mid,n,v)){cnt=mid;r=mid;}
            else l=mid;
        }
        cout<<cnt;
    }
}
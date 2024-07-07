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
    int n;cin>>n;
    vector<int>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    sort(all(v));
    double sum=0;
    for(int a=0;a<n;a++)sum+=v[a];
    sum=sum/n;
    if(round(sum)==5)cout<<0;
    else{
        int cnt=0;
        for(int a=0;a<n;a++){
            sum=((sum*n)-v[a]+5)/n;
            if(round(sum)==5){
                cnt++;    
                break;
            }
            else cnt++;
        }
        cout<<cnt;
    }
}
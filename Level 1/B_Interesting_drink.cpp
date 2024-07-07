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
    ll n;cin>>n;
    vector<ll>shops(n,0);
    for(ll a=0;a<n;a++)cin>>shops[a];
    ll days;cin>>days;
    sort(shops.begin(),shops.end());
    for(ll a=0;a<days;a++){
        ll day;cin>>day;
        ll upind=upper_bound(shops.begin(),shops.end(),day)-shops.begin();
        if(shops[upind]==day)
        upind++;
        cout<<upind<<endl;
    }
}
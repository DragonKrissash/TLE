#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n;cin>>n;
    vector<ll> v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    int maxp=0;
    vector<ll>dif;
    for(int a=0;a<n;a++){
        if(v[maxp]<v[a])
        maxp=a;
        else{
            dif.push_back(v[maxp]-v[a]);
        }
    }
    sort(dif.begin(),dif.end());
    for(int a=dif.size()-1;a>0;a--){
        dif[a]=dif[a]-dif[a-1];
    }
    ll changes=0;
    int mult=dif.size();
    for(int a=1;a<dif.size();a++)
    {
        changes+=dif[a]*mult;
        mult-=1;
    }
    cout<<changes<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
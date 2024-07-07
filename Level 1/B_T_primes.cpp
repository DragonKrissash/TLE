#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isPrime(ll x){
    for(ll a=2;a*a<=x;a++){
        if(x%a==0)return false;
    }
    return true;
}

int main()
{
   fastio
    int n;cin>>n;
    vector<ll>v(n,0);
    for(int a=0;a<n;a++)cin>>v[a];
    for(int a=0;a<n;a++){
        ll root=(ll)sqrt(v[a]);
        if(v[a]==1 || v[a]==0)
        cout<<"NO"<<endl;
        else if(root*root == v[a])
        cout<<(isPrime(sqrt(v[a]))? "YES":"NO")<<endl;
        else cout<<"NO"<<endl;
    }
}
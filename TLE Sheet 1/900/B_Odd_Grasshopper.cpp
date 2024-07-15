#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    int x;cin>>x;
    int rem=x%4;
    int start=x/4 * 4;
    start+=1;
    rem-=1;
    while(rem>=0){
        if(n%2==0){
            n=n-start;
        }
        else{
            n=n+start;
        }
        start++;
        rem--;
    }
    cout<<n<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
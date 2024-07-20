#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    int rem=s-b*k;
    if(rem>n*(k-1) || s<b*k){
        cout<<-1<<nl;
        return;
    }
    vector<int>v;
    for(int a=0;a<n;a++){
        if(b){
            v.push_back(1);
            b--;
        }
        else {
            v.push_back(0);
        }
    }
    if(b)v[n-1]+=b;
    for(int a=0;a<n;a++){
        v[a]*=k;
        s-=v[a];
    }
    if(s){
        for(int a=0;a<n;a++){
            if(s>k-1){
                v[a]+=k-1;
                s-=k-1;
            }
            else{
                v[a]+=s;
                break;
            }
        }
    }
    for(int a=0;a<n;a++)
    cout<<v[a]<<" ";
    cout<<nl;

}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
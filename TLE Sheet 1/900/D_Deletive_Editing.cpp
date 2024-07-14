#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(ll a=0;a<v.size();a++)cin>>v[a]

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string s,t;cin>>s>>t;
    int n=s.length();
    int m=t.length();
    map<char,int>m1;
    map<char,int>m2;
    for(auto c:s){
        m1[c]++;
    }   
    for(auto c:t)m2[c]++;
    int i=0,j=0;
    while(i<n && j<m){
        if(s[i]==t[j]){
            char c=s[i];
            if(m1[c]<m2[c])
            {
                cout<<"NO"<<nl;
                return;
            }
            if(m1[c]==m2[c])
            {
                j++;
                m2[c]--;
            }
            m1[c]--;
            i++;
        }
        else{
            m1[s[i]]--;
            i++;
        }
    }
    if(j==m)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    multiset<int>st;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        auto it=st.upper_bound(x);
        if(it==st.end())st.insert(x);
        else{
            st.erase(it);
            st.insert(x);
        }
    }
    cout<<st.size()<<" ";
    for(auto x:st)cout<<x<<" ";
    cout<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
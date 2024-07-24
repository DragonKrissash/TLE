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
    int n,k;cin>>n>>k;
    vi v(n);
    input(v);
    sort(all(v));
    deque<int>dq;
    int cursum=0;
    dq.push_back(v[n-1]);
    cursum+=v[n-1];
    int maxsum=0;
    maxsum=max(maxsum,cursum);
    bool kfound=0;
    for(int a=n-2;a>=0;a--){
        if(dq.front()-v[a] <=1 and dq.back()-v[a]<=1 and (cursum+v[a])<=k){
            dq.push_front(v[a]);
            cursum+=v[a];
            maxsum=max(maxsum,cursum);
            if(maxsum==k)
            {   kfound=1;
                break;
            }
        }
        else if(dq.front()-v[a]<=1 and dq.back()-v[a]>1 and (cursum-dq.back()+v[a]) <=k){
            cursum-=dq.back();
            dq.pop_back();
            dq.push_front(v[a]);
            cursum+=v[a];
            maxsum=max(maxsum,cursum);
        }
        else{
            cursum-=dq.back();
            dq.pop_back();
            dq.push_back(v[a]);
            cursum+=v[a];
            maxsum=max(maxsum,cursum);
        }

    }
    cout<<maxsum<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
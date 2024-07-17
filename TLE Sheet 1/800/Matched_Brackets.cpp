#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define sp " "

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int n;cin>>n;
    vi v(n,0);
    input(v);
    int cnt=0;
    vi ans;
    int max_depth=0;
    int first_ind=-1;
    for(int a=0;a<n;a++){
        if(v[a]==1){
            cnt++;
            if(cnt>max_depth){
                max_depth=max(max_depth,cnt);
                first_ind=a+1;
            }
        }
        else cnt--;
    }
    cout<<max_depth<<sp<<first_ind<<sp;
    int maxLen=0,len=0,cursum=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            cursum=0;
            len=0;
            int j=i;
            for(j=i;j<n;j++){
                if(v[j]==1)cursum++;
                else{
                    len+=2;
                    cursum--;
                }
                if(cursum==0)break;
            }
            if(len>maxLen){
                maxLen=len;
                first_ind=i+1;
            }
            i=j-1;
        }
    }
    cout<<maxLen<<sp<<first_ind<<nl;
}
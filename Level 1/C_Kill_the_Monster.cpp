#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

int getCeil(int a,int b){
    return (a+b-1)/b;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
        int hc,dc,hm,dm,a,w,k;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        if(getCeil(hm,dc)<=getCeil(hc,dm)){
            cout<<"YES"<<endl;
        }
        else{
            bool y=false;
            for(int x=0;x<=k;x++){
                if(getCeil(hm,dc+x*w)<=getCeil(hc+(k-x)*a,dm)){
                    y=true;
                    break;
                    }
            }
            if(y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
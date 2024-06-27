#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
            ll n;cin>>n;
            int mov=0;
            bool y=true;
            while(true){
                if(n==2 || n==4 || n%10==5)
                {
                    y=false;
                    break;
                }
                else if(n==1){
                    break;
                }
                else{
                    if(n%6==0){
                    n/=6;
                    mov++;
                    }
                    else{
                        if(n%3==0)
                        {n*=2;
                        mov++;}
                        else{
                            y=false;break;
                        }
                    }
                }
                
            }
            if(y)cout<<mov<<endl;
            else cout<<-1<<endl;
    }
}
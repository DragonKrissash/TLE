#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isPrime(int n){
    for(int a=2;a<=sqrt(n);a++){
        if(n%a==0) return false;
    }
    return true;
}

int main()
{   
   fastio
    int n,k;
    cin>>n>>k;
    vector<int>ans;int cnt=1;
    for(int a=2;a<=n;a++){
        if(cnt==k)
            break;
        if(n%a==0 && isPrime(a)){
            while(n%a==0 && n>1){
                if(cnt==k)
                break;
                n/=a;
                ans.push_back(a);
                cnt++; 
            }
        }   
    }
    if(cnt==k and n!=1){
        ans.push_back(n);
    for(int a=0;a<ans.size();a++)
    cout<<ans[a]<<" ";      
        }
    else cout<<"-1";
    
}
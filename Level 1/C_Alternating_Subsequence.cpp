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
        int n;cin>>n;
        vector<ll>v(n,0);
        ll mx;ll sm=0;int j=0;
        for(int i=0;i<n;i++)cin>>v[i];

        for(int i=0;i<n;i++)
        {   mx=-1e10;
            while(j<n && ((v[i]>0 && v[j]>0) || (v[i]<0 && v[j]<0)))
            {
                mx=max(v[j],mx);
                j++;
            }
            sm+=mx;
            i=j-1;
        }
        cout<<sm<<endl;
    }
}












// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define vi vector<int>
// #define vll vector<ll>
// #define inp(v) for(int a=0;a<v.size();a++)cin>>v[a];

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

// signed main(){

//     fastio
//     int tc;cin>>tc;
//     while(tc--){
//         int n;cin>>n;
//         vector<ll> v(n,0);
//         inp(v)
//         vll ans;
//         int ptrp=0,ptrn=0;
//         bool y=true;
//         if(n==1){
//             cout<<v[0]<<endl;
//         }
//         else{
//             ans.push_back(v[0]);
//             if(v[0]>0)y=false;
//             else y=true;
//             for(int a=1;a<n;a++){
//                 if(y==true && v[a]>0){
//                     ans.push_back(v[a]);
//                     ptrp=a;
//                     y=false;
//                 }
//                 else if(y==false && v[a]<0){
//                     ans.push_back(v[a]);
//                     ptrn=a;
//                     y=true;
//                 }
//                 else{
//                     if(v[a]>v[ptrp])
//                     {
//                         ans.pop_back();
//                         ans.push_back(v[a]);
//                         ptrp=a;
//                     }
//                     else if(v[a]>v[ptrn]){
//                         ans.pop_back();
//                         ans.push_back(v[a]);
//                         ptrn=a;
//                     }
//                 }
//             }
//             ll sumx=0;
//             for(int a=0;a<ans.size();a++)
//             sumx+=ans[a];
//             cout<<sumx<<endl;
//         }
        
//     }
// }
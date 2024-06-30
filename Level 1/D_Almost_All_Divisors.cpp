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
        for(ll a=0;a<n;a++)cin>>v[a];
        sort(v.begin(),v.end());
        ll orgnum=v[0]*v[n-1];
        vector<ll> v2;
        for(ll a=2;a<=sqrt(orgnum);a++)
        {
            if(orgnum%a==0)
            {
                v2.push_back(a);
                if(orgnum/a != a)
                v2.push_back(orgnum/a);
            }
        }
        sort(v2.begin(),v2.end());
        if(v==v2)cout<<orgnum<<endl;
        else cout<<-1<<endl;
    }
}



































// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define vi vector<int>

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

// bool isPrime(int n){
//     for(int a=2;a<=sqrt(n);a++)
//     if(n%a==0) return false;
//     return true;
// }

// signed main(){

//     fastio

//     vector<ll>divs((int)1e6+1,0);
//     for(int a=1;a<=(int)1e6+1;a++){
//         for(int b=a;b<=(int)1e6+1;b+=a){
//             divs[b]++;
//         }
//     }

//     int tc;cin>>tc;
//     while(tc--){
//         int n;cin>>n;
//         vector<ll> v(n,0);
//         for(int a=0;a<n;a++)cin>>v[a];
//         sort(v.begin(),v.end());
//         if(n==1 && isPrime(n))cout<<v[0]*v[0]<<endl;
//         else{
//             if(divs[v[0]*v[n-1]]==n+2)
//             cout<<v[0]*v[n-1]<<endl;
//             else cout<<-1<<endl;
//         }


//         //     if(n%2==0){
//         //     if(v[0]*v[n-1]==v[(n-1)/2]*v[(n/2)])
//         //     cout<<v[0]*v[n-1]<<endl;
//         //     else cout<<-1<<endl;
//         // }
//         // else{
//         //     if(v[0]*v[n-1]==v[n/2]*v[n/2])
//         //     cout<<v[0]*v[n-1]<<endl;
//         //     else cout<<-1<<endl;
//         // }        
//     }
// }
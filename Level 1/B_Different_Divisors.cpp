#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

signed main(){

    vector<bool>isPrime((int)1e6+1,true);
    isPrime[0]=false;isPrime[1]=false;
    for(int a=2;a<=(int)1e6+1;a++){
        if(isPrime[a]){
            for(int b=2*a;b<=(int)1e6+1;b+=a)
            isPrime[b]=false;
        }
    }

    fastio
    int tc;cin>>tc;
    while(tc--){
        int d;cin>>d;
        int p,q;
        int a=1;
        while(isPrime[d+a]==false){
            a++;
        }
        p=d+a;
        a=d;
        while(isPrime[p+a]==false)a++;
        q=p+a;
        cout<<p*q<<endl;
    }
}




























// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define vi vector<int>

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

// bool check(int num,int d){
//     vector<int>v;
//     for(int a=1;a<=sqrt(num);a++){
//         if(num%a==0){
//             v.push_back(a);
//             if(num/a!=a)
//             v.push_back(num/a);
//         }
//     }
//     // cout<<num<<d<<endl;
//     if(v.size()<4)return false;
//     sort(v.begin(),v.end());
//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<endl;
//     for(int a=0;a<v.size()-1;a++){
//         if((v[a+1]-v[a])<d) return false;
//     }
//     return true;
// }

// signed main(){

//     // vector<int>divs((int)1e6+1,1);
//     // for(int a=2;a<=(int)1e6+1;a++){
//     //     for(int b=a;b<=(int)1e6+1;b+=a)
//     //     divs[b]++;
//     // }
//     fastio
//     int tc;cin>>tc;
//     while(tc--){
//         int ans=0;
//         int d;cin>>d;
//         int lo=1,hi=(int)1e6;
//         int a=1;
//         while(hi-lo>1){
//             int mid=(lo+hi)/2;
//             // if(divs[a]>=4 && check(a,d))
//             if(check(mid,d))
//             {
//                 ans=mid;hi=mid;
//             }
//             else lo=mid;
//         }
//         cout<<ans<<endl;
        
        
//         // while(lo+1<hi){
//         //     int mid=(lo+hi)/2;
//         //     if(check(mid,d)){ans=hi;hi=mid-1;}
//         //     else lo=mid+1;
//         // }
//         // cout<<ans<<endl;
//     }
// }
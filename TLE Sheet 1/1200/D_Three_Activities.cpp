//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "
#define repi(a,b,c) for(int i=a;i<=b;i+=c)
#define pii pair<int,int>
#define mx(v) max_element(v.begin(),v.end())
#define mn(v) min_element(v.begin(),v.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL)
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve();

signed main(){

    fastio
    int tc;
    tc=1;
    cin>>tc;
    while(tc--){
    solve();
    }
}

void solve(){
    int n;cin>>n;
    vector<pii>mo(n),sk(n),bo(n);
    for(int a=0;a<n;a++){
        int x;cin>>x;
        mo[a]={x,a};
    }
    for(int a=0;a<n;a++){
        int x;cin>>x;
        sk[a]={x,a};
    }
    for(int a=0;a<n;a++){
        int x;cin>>x;
        bo[a]={x,a};
    }
    auto cmp=[](pii &p,pii &q){
        return p.X>q.X;
    };
    sort(all(mo),cmp);
    sort(all(sk),cmp);
    sort(all(bo),cmp);
    vi arr1={mo[0].Y,mo[1].Y,mo[2].Y};
    vi arr2={sk[0].Y,sk[1].Y,sk[2].Y};
    vi arr3={bo[0].Y,bo[1].Y,bo[2].Y};
    int ans=0;
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            for(int c=0;c<3;c++){
                if(arr1[a]!=arr2[b] and arr2[b]!=arr3[c] and arr1[a]!=arr3[c]){
                    ans=max(ans,mo[a].X+sk[b].X+bo[c].X);
                }
            }
        }
    }
    cout<<ans<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis














































// //#pragma GCC optimize("Ofast")
// //#pragma GCC target("avx2")
// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define int long long
// #define vi vector<int>
// #define all(v) v.begin(),v.end()
// #define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
// #define X first
// #define Y second
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define sp " "
// #define repi(a,b,c) for(int i=a;i<=b;i+=c)
// #define pii pair<int,int>
// #define mx(v) max_element(v.begin(),v.end())
// #define mn(v) min_element(v.begin(),v.end())
// #define sm(v) accumulate(v.begin(),v.end(),0LL)
// const int MOD = 1e9+7;

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// void solve();

// signed main(){

//     fastio
//     int tc;
//     tc=1;
//     cin>>tc;
//     while(tc--){
//     solve();
//     }
// }

// void solve(){
//     int n;cin>>n;
//     vector<pair<pii,int>>mo(n),sk(n),bo(n);
//     for(int a=0;a<n;a++){
//         int x;cin>>x;
//         mo[a]={{x,a},1};
//     }
//     for(int a=0;a<n;a++){
//         int x;cin>>x;
//         sk[a]={{x,a},2};
//     }
//     for(int a=0;a<n;a++){
//         int x;cin>>x;
//         bo[a]={{x,a},3};
//     }
//     auto cmp=[](pair<pii,int>&p,pair<pii,int>&q){
//         return p.X.X>q.X.X;
//     };
//     sort(all(mo),cmp);
//     sort(all(bo),cmp);
//     sort(all(sk),cmp);
//     // for(int a=0;a<n;a++){
//     //     cout<<mo[a].X.X<<sp;
//     // }
//     // cout<<nl;
//     // for(int a=0;a<n;a++){
//     //     cout<<sk[a].X.X<<sp;
//     // }
//     // cout<<nl;
//     // for(int a=0;a<n;a++){
//     //     cout<<bo[a].X.X<<sp;
//     // }
//     // cout<<nl;
//     priority_queue<pair<pii,int>,vector<pair<pii,int>>>pq;
//     int sum=0;
//     unordered_set<int>st;
//     unordered_set<int>st2;
//     pq.push(mo[0]);
//     pq.push(sk[0]);
//     pq.push(bo[0]);
//     int p1=1,p2=1,p3=1;
//     int cnt=3;
//     while(cnt>0){
//         auto [p,num]=pq.top();
//         pq.pop();
//         cout<<p.X<<sp<<p.Y<<sp<<num<<nl;
//         if(st.count(p.Y)==0){
//             st2.insert(num);
//             st.insert(p.Y);
//             sum+=p.X;
//             cnt--;
//         }
//         if(num==1){
//             pq.push(mo[p1]);
//             p1++;
//         }
//         else if(num==2){
//             pq.push(sk[p2]);
//             p2++;
//         }
//         else{
//             pq.push(bo[p3]);
//             p3++;
//         }
//     }
//     cout<<sum<<nl;
// }



// // Question od be ded
// // constraints dekh be ded
// // shortcut aas satni time waste karnako be ded
// // tujere nammakam thonge, solve karsaktis

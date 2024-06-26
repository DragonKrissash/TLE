// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long
// #define vi vector<int>

// #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

// int trans(vector<vector<int>>&arr,int a,int b){
//     int n=arr.size();
//     int m=arr[0].size();
//     if(a==0){
//         if(b==0)
//         return max(arr[a+1][b],arr[a][b+1]);
//         else if(b==m-1){
//             return max(arr[a+1][b],arr[a][b-1]);
//         }
//         else return max(arr[a+1][b],max(arr[a][b-1],arr[a][b+1]));
//     }
//     else if(a==n-1){
//         if(b==0)
//         return max(arr[a-1][b],arr[a][b+1]);
//         else if(b==m-1){
//             return max(arr[a-1][b],arr[a][b-1]);
//         }
//         else return max(arr[a-1][b],max(arr[a][b-1],arr[a][b+1]));
//     }
//     else{
//         if(b==0){
//             return max(arr[a-1][b],max(arr[a+1][b],arr[a][b+1]));
//         }
//         else if(b==m-1)
//         return max(arr[a-1][b],max(arr[a+1][b],arr[a][b-1]));
//         else return max(arr[a-1][b],max(arr[a+1][b],max(arr[a][b+1],arr[a][b-1])));
//     }
//     return 0;
// }

// signed main(){

//     fastio
//     int tc;cin>>tc;
//     while(tc--){
//         int n,m;cin>>n>>m;
//         vector<vector<int>>v;
//         for(int a=0;a<n;a++)
//         {vector<int>te;
//             for(int b=0;b<m;b++){
//                 int x;cin>>x;
//                 te.push_back(x);
//             }
//             v.push_back(te);
//         }
//         cout<<v.size();
//         for(int a=0;a<n;a++){
//             for(int b=0;b<m;b++){
//                 v[a][b]=trans(v,a,b);
//             }
//         }
//         for(int a=0;a<n;a++){
//             for(int b=0;b<m;b++)
//             cout<<v[a][b]<<" ";
//             cout<<endl;
//         }
//     }
// }













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
        int n,m;cin>>n>>m;
        int arr[n][m];
        for(int a=0;a<n;a++)
        for(int b=0;b<m;b++)
        cin>>arr[a][b];

        // if(n==1){
        //     if(m==2)
        //     arr[0][0]=min(arr[0][1],arr[0][0]);
        // }
        //         else{
                for(int a=0;a<n;a++)
                {
                    for(int b=0;b<m;b++)
                    {
                        if(a==0)
                        {
                            if(b==0){
                                if(arr[a][b]>arr[a][b+1] and arr[a][b]>arr[a+1][b])
                                arr[a][b]=max(arr[a+1][b],arr[a][b+1]);
                            }
                            else if(b==m-1){
                                if(arr[a][b]>arr[a][b-1] and arr[a][b]>arr[a+1][b])
                                arr[a][b]=max(arr[a+1][b],arr[a][b-1]);
                            }
                            else{
                                if(arr[a][b]>arr[a][b-1] and arr[a][b]>arr[a][b+1] and arr[a][b]>arr[a+1][b])
                                arr[a][b]=max(arr[a][b-1],max(arr[a+1][b],arr[a][b+1]));
                            }
                        }
                        else if(a==n-1){
                            if(b==0){
                                if(arr[a][b]>arr[a-1][b] and arr[a][b]>arr[a][b+1])
                                arr[a][b]=max(arr[a-1][b],arr[a][b+1]);
                            }
                            else if(b==m-1){
                                if(arr[a][b]>arr[a][b-1] and arr[a][b]>arr[a-1][b])
                                arr[a][b]=max(arr[a-1][b],arr[a][b-1]);
                            }
                            else{
                                if(arr[a][b]>arr[a][b-1] and arr[a][b]>arr[a][b+1] and arr[a][b]>arr[a-1][b])
                                arr[a][b]=max(arr[a][b-1],max(arr[a-1][b],arr[a][b+1]));
                            }
                        }
                        else{
                            int num=arr[a][b];
                            if(b==0){
                                if(arr[a][b]>arr[a-1][b] and arr[a][b]>arr[a+1][b] and arr[a][b]>arr[a][b+1])
                                arr[a][b]=max(arr[a-1][b],max(arr[a+1][b],arr[a][b+1]));
                            }
                            else if(b==m-1){
                                if(arr[a][b]>arr[a-1][b] and arr[a][b]>arr[a+1][b] and arr[a][b]>arr[a][b-1])
                                arr[a][b]=max(arr[a-1][b],max(arr[a+1][b],arr[a][b-1]));
                            }else{
                                if(num>arr[a-1][b] and num>arr[a+1][b] and num>arr[a][b-1] and arr[a][b+1])
                            arr[a][b]=max(arr[a-1][b],max(arr[a+1][b],max(arr[a][b-1],arr[a][b+1])));
                            }


                            
                        }
                    }
                // }
            }
        for(int a=0;a<n;a++)
        {
            for(int b=0;b<m;b++)
            cout<<arr[a][b]<<" ";
            cout<<endl;
        }
    }
}
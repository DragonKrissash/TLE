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
        string s1,s2;
        int sum1=0;
        while(sum1<n){
            s1+="1";
            sum1+=1;
            if(sum1<n)
            {s1+="2";
            sum1+=2;
            }
        }
        int sum2=0;
        while(sum2<n){
            s2+="2";
            sum2+=2;
            if(sum2<n)
            {s2+="1";
            sum2+=1;
            }
        }
        if(sum1==sum2){
            if(stoi(s1)>stoi(s2))
        cout<<s1<<endl;
        else cout<<s2<<endl;
        }
        else{
            if(sum1==n)
            cout<<s1<<endl;
            else cout<<s2<<endl;
        }
    }
}
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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
#define pb push_back
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
    string s;cin>>s;
    int sum=0;
    int n=s.size();
    int cnt2=0,cnt3=0;
    for(int a=0;a<n;a++){
        sum+=(s[a]-'0');
        sum=sum%9;
        if(s[a]=='2')cnt2++;
        if(s[a]=='3')cnt3++;
    }
    int rem=9-sum;
    if(sum==0){
        yes;
    }
    else{
        for(int a=0;a<=cnt2;a++){
            for(int b=0;b<=cnt3;b++){
                if((2*a+6*b)%9 == rem){
                    yes;
                    return;
                }
            }
        }
        no;
    }
        // int a=cnt2;
        // int b=cnt3;
        // if(rem==1){
        //     if(a>=2 and b>=1){
        //         yes;
        //     }
        //     else no;
        // }
        // else if(rem==2){
        //     if(a>=1)yes;
        //     else no;
        // }
        // else if(rem==3){
        //     if(b>=2)yes;
        //     else no;
        // }
        // else if(rem==4){
        //     if(a>=2)yes;
        //     else no;
        // }
        // else if(rem==5){
        //     if(a>=1 and b>=2)yes;
        //     else no;
        // }
        // else if(rem==6){
        //     if(b>=1)yes;
        //     else no;
        // }
        // else if(rem==7){
        //     if(a>=2 and b>=2)yes;
        //     else no;
        // }
        // else if(rem==8){    
        //     if(a>=1 and b>=1)yes;
        //     else no;
        // }
    // }
    // cout<<sum<<sp<<"2: "<<sp<<cnt2<<"3: "<<sp<<cnt3<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

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
#define ld long double
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
    int n=s.size();
    sort(all(s));
    int i=0,j=n-1;
    vector<char>vc(n);
    for(int a=0;a<n;a+=2){
        if(a==n-1){
            vc[i]=s[a];
        }
        else if(s[a]==s[a+1]){
            vc[i]=s[a];
            vc[j]=s[a+1];
            i++;j--;
        }
        else{
            if(s[a+1]==s[n-1]){
                int len=n-a-1;
                int fh=(len+1)/2;
                int sh=len-fh;
                while(fh--){
                    vc[i]=s[a+1];
                    i++;
                }
                vc[i]=s[a];
                while(sh--){
                    vc[j]=s[n-1];
                    j--;
                }
                break;
            }
            else{
                for(int b=a+1;b<n;b++){
                    vc[i]=s[b];
                    i++;
                }
                vc[j]=s[a];
                break;
            }
        }
    }
    for(char c:vc)cout<<c;
    cout<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

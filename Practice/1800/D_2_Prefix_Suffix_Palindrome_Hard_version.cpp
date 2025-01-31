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

string getPal(string &s){
    int n=s.size();
    int m=1e9+7;
    int b1=31,b2=37,b3=53;
    int p1=1,p2=1,p3=1;
    int len=1;
    int hf1=0,hf2=0,hf3=0,hr1=0,hr2=0,hr3=0;
    for(int a=0;a<n;a++){
        int c=s[a]-'a'+1;
        hf1=(hf1*b1+c)%m;
        hf2=(hf2*b2+c)%m;
        hf3=(hf3*b3+c)%m;
        hr1=(c*p1+hr1)%m;
        hr2=(c*p2+hr2)%m;
        hr3=(c*p3+hr3)%m;
        p1=(p1*b1)%m;
        p2=(p2*b2)%m;
        p3=(p3*b3)%m;
        if(hf1==hr1 and hf2==hr2 and hf3==hr3){
            len=a+1;
        }
    }
    return s.substr(0,len);
}

void solve(){
    string s;cin>>s;
    int n=s.size();
    int l=0,r=n-1;
    while(l<=r and s[l]==s[r]){
        l++;r--;
    }
    if(l>r){
        cout<<s<<nl;
        return;
    }
    string pre=s.substr(0,l);
    string mid=s.substr(l,n-2*l);
    string w1=getPal(mid);
    reverse(all(mid));
    string w2=getPal(mid);
    cout<<pre;
    if(w1.size()>w2.size()){
        cout<<w1;
    }
    else cout<<w2;
    reverse(all(pre));
    cout<<pre<<nl;
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

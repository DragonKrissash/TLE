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
    // cin>>tc;
    while(tc--){
    solve();
    }
}

string que(int n){
    cout<<n<<endl;
    string s;cin>>s;
    return s;
}

void solve(){
    vi primes(101,1);
    vi p;
    primes[0]=0;
    primes[1]=0;
    for(int a=2;a<=100;a++){
        if(primes[a]){
            p.pb(a);
            for(int b=a*a;b<=100;b+=a){
                primes[b]=0;
            }
        }
    }
    string rep=que(2);
    if(rep=="yes"){
        rep=que(4);
        if(rep=="yes"){
            cout<<"composite"<<endl;
            return;
        }
        else{
            for(int a=1;a<16;a++){
                rep=que(p[a]);
                if(rep=="yes"){
                    cout<<"composite"<<endl;
                    return;
                }
            }
            cout<<"prime"<<endl;
            return;
        }
    }
    else{
        int cnt=0;
        for(int a=1;a<18;a++){
            rep=que(p[a]);
            if(rep=="yes")cnt++;
            if(p[a]<10 and que(p[a]*p[a])=="yes")cnt++;
            if(cnt>1){
                cout<<"composite"<<endl;
                return;
            }
        }
        if(cnt>1){
            cout<<"composite"<<endl;
        }
        else cout<<"prime"<<endl;
    }
}



// Question od be ded
// constraints dekh be ded
// shortcut aas satni time waste karnako be ded
// tujere nammakam thonge, solve karsaktis

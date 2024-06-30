#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
   fastio
    int n,k;cin>>n>>k;
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int a=2;a<=n;a++){
        if(isPrime[a]){
            for(int b=a+a;b<=n;b+=a)
            isPrime[b]=false;
        }
    }
    vector<int>primes;
    for(int a=2;a<=n;a++){
        if(isPrime[a])
        primes.push_back(a);
    }
    int cnt=0;
    for(int a=2;a<=n;a++){
        if(isPrime[a]){
          for(int b=0;b<primes.size()-1;b++){
            if(primes[b]+primes[b+1]+1 == a)
            cnt++;
          }
        }
    }
    if(cnt>=k)cout<<"YES";
    else cout<<"NO";
}
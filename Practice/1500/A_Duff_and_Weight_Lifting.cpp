#include <bits/stdc++.h>
using namespace std;

const int N=1e7;
int fre[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int ans=0;
    for(int a=0;a<n;a++){
        int x;cin>>x;
        fre[x]++;
    }
    for(int a=0;a+1<N;a++){
        fre[a+1]+=fre[a]/2;
        fre[a]&=1;
        ans+=fre[a];
    }
    cout<<ans<<"\n";
    return 0;
}
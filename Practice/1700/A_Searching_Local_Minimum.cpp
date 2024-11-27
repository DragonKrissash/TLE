#include <bits/stdc++.h>
using namespace std;

int query(int n){
    cout<<"? "<<n<<endl;
    int inp;cin>>inp;
    return inp;
}

int main(){
    int n;cin>>n;
    int l=1,r=n,mid;
    while(l<=r){
        mid=(l+r)/2;
        int a=(mid-1==0)? 1e9:query(mid-1);
        int b=query(mid);
        int c=(mid+1==n+1)? 1e9:query(mid+1);
        if(a>b and b<c)break;
        else if(a<b)r=mid-1;
        else l=mid+1;
    }
    cout<<"! "<<mid<<endl;
}
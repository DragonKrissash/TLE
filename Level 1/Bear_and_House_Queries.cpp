#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int side,base,height;

bool ask(int x,int y){
    cout<<"? "<<x<<" "<<y<<" ";
    string s;cin>>s;
    return s=="YES";
}

int findSide(){
    int l=1,r=1000;
    side=0;
    while(r-l>1){
        int m=(l+r)/2;
        if(ask(m,0)){
            side=m;
            l=m;
        }
        else r=m;
    }
    return side;
}

int findBase(){
    int l=side,r=1000;
    base=0;
    while(r-l>1){
        int m=(l+r)/2;
        if(ask(m,side)){
            base=m;
            l=m;
        }
        else r=m;
    }
    return base;
}

int findHt(){
    int l=1,r=1000;
    height=0;
    while(r-l>1){
        int m=(l+r)/2;
        if(ask(0,m)){
            height=m;
            l=m;
        }
        else r=m;
    }
    return height;
}

int main()
{
   fastio
    int side=findSide();
    side=side*2;
    int base=findBase();
    base=base*2;
    int height=findHt();
    height=height-side;
    int area=base*height/2+side*side;
    cout<<"! "<<area;
}
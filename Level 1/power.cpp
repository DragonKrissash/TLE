#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int power(int b,int exp){
    if(exp==0)return 1;
    else if(exp==1)return b;
    int temp=power(b,exp/2);
    if(exp%2==0)
    return temp*temp;
    else return temp*temp*b;
}

int main()
{
   fastio
    cout<<power(5,10);
}
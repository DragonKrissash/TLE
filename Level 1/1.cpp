#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool comp(int a,int b){
    return a>b;
}

int main()
{
   fastio
    priority_queue<int,vector<int>>pq;
    pq.push(5);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
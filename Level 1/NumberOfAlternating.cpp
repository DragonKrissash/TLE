#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int numberOfAlternatingGroups(vector<int>& colors) {
     int n=colors.size();
     colors.push_back(colors[0]);
     colors.push_back(colors[1]);
     int cnt=0;
     for(int a=0;a<n;a++){
        if(colors[a]==0){
            if(colors[a+1]==1 and colors[a+2]==0)
            cnt++;
        }
        else{
            if(colors[a+1]==0 and colors[a+2]==1)
            cnt++;
        }
     }  
     return cnt;
    }

int main()
{
   fastio

}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


    int numberOfAlternatingGroups(vector<int>& colors, int k) {//0 1 1, 3
        int n=colors.size();
        for(int a=0;a<k;a++){
            colors.push_back(colors[a]);
        }
        queue <int>q;
        int cnt=1;
        int ans=0;
        for(int a=0;a<n;a++){
            if(!q.empty() and colors[a]!=q.back()){
                cnt++;
            }
            else{
                cnt=1;
                while(q.size()>1)
                q.pop();
            }   
            if(cnt==k){
                ans++;
                cnt=1;
            }
            q.push(colors[a]);
        }
        return ans;
    }

int main()
{
   fastio
   vector<int>v={0,1,1};
    cout<<numberOfAlternatingGroups(v,3);
}
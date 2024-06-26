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
    string s;cin>>s;
    int n=s.size();
    if(n==1)cout<<s;
    else{
        vector<int>nums;
    for(int a=0;a<n;a++){
        if(isdigit(s[a])) nums.push_back(s[a]-'0');
    }
    sort(all(nums));
    for(int a=0;a<nums.size();a++){
        if(a==nums.size()-1)cout<<nums[a];
        else
        cout<<nums[a]<<"+";
    }
    }
    
}
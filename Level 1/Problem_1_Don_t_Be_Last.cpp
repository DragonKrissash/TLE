#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool cmp(pair<string,int>a,pair<string,int>b){
    return a.Y<b.Y;
}

int main()
{
   fastio
    map<string,int>mp;
    int n;cin>>n;
    for(int a=0;a<n;a++){
        string s;cin>>s;
        int x;cin>>x;
        mp[s]+=x;
    }
    vector<pair<string,int>>v;
    for(auto [key,val]:mp){
        v.push_back({key,val});
    }    
    sort(all(v),cmp);
    int low=v[0].Y;
    for(int a=0;a<v.size();a++){
        if(v[a].Y!=low){
            cout<<v[a].X<<endl;
            return 0;
        }
    }
    cout<<"TIE"<<endl;
}
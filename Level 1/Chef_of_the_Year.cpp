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
    int n,m;cin>>n>>m;
    map<string,pair<string,int>>chef;
    map<string,int>cnt;
    for(int a=0;a<n;a++){
        string s; string cntr;
        cin>>s>>cntr;
        chef[s].X=cntr;
        chef[s].Y=0;
    }
    for(int a=0;a<m;a++){
        string s;cin>>s;
        cnt[chef[s].X]++;
        chef[s].Y++;
    }
    int votes=0;
    string cheff="";
    for(auto a:chef){
        if(a.Y.Y>votes){
            votes=a.Y.Y;
            cheff=a.X;
        }
        else if(a.Y.Y==votes){
            cheff=min(cheff,a.X);
        }
    }
    string cntry;
    votes=0;
    for(auto a:cnt){
        if(a.Y>votes){
            votes=a.Y;
            cntry=a.X;
        }
        else if(a.Y==votes){
            cntry=min(cntry,a.X);
        }
    }
    cout<<cntry<<endl<<cheff;
}
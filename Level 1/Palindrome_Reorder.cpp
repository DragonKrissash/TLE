#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

string addChar(char c,int n){
    string word="";
    for(int a=0;a<n;a++)
    word+=c;
    return word;
}

int main()
{
   fastio
    string s;cin>>s;
    map<char,int>mp;
    for(int a=0;a<s.size();a++)
    mp[s[a]]++;
    if(mp.size()==1)
    cout<<s<<endl;
    else
    {   int cnt=0;
        string word="";
        char ch='1';
        for(auto pr:mp){
            if(pr.second%2==0){
                word+=addChar(pr.first,pr.second/2);
            }
            else {ch=pr.first;cnt++;}
        }
        if(cnt>1)
        cout<<"NO SOLUTION"<<endl;
        else{
            string t=word;
            reverse(t.begin(),t.end());
            if(ch=='1')
            word=word+t;
            else
            word=word+addChar(ch,mp[ch])+t;
            cout<<word<<endl;
        }
        
    }
    
}
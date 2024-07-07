#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// bool check(queue<char>q,string pat){
//     string word="";
//     while(!q.empty()){
//         word+=q.front();
//         q.pop();
//     }
//     map<char,int>mp;
//     for(int a=0;a<pat.size();a++){
//         mp[pat[a]]++;
//     }
//     int cnt=0;
//     for(int a=0;a<pat.size();a++){
//         mp[word[a]]--;
//         // cout<<mp[word[a]]<<endl;
//         cnt=min(cnt,mp[word[a]]);
//     }
//     // cout<<cnt<<endl;
//     return cnt==0;
// }

int search(string pat, string txt) {
	    // code here
	    int cnt=0;
        set<char>pt;
        set<char>tt;
        for(int a=0;a<pat.size();a++)pt.insert(pat[a]);
        queue<char>q;
        for(int a=0;a<txt.size();a++){
            if(q.size()<pat.size()){
                q.push(txt[a]);
                tt.insert(txt[a]);
            }
            else{
                if(pt==tt)cnt++;
                tt.erase(q.front());
                q.pop();
                q.push(txt[a]);
                tt.insert(txt[a]);
            }
        }
        if(pt==tt)cnt++;
	    return cnt;
	}

int main()
{
   fastio
    cout<<search("for","forxxorfxdofr");
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

bool check(int y){
    string s=to_string(y);
    bool t = (s[0]!=s[2]) && (s[0]!=s[1])&& (s[1]!=s[3]) && (s[1]!=s[2]) && (s[2]!=s[3]) && (s[0]!=s[3]);
    return t;
}

int main()
{
   fastio
    int y;
    cin>>y;
    y=y+1;
    while (true){
        if(check(y)){
            cout << y << endl;
            break;
        }
        else y+=1;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

string getEncryptedString(string s, int k) {
        int n=s.length();
        k=k%n;
        string word="";
        for(int a=0;a<n;a++){
            word+=s[(a+k)%n];
        }   
        return word;
    }

int main()
{
   fastio

}
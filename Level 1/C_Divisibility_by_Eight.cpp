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
        for(int a=0;a<n;a++){
            if(s[a]=='8' || s[a]=='0'){
                cout<<"YES"<<endl<<s[a];
                return 0;
            }
        }
    if(n>=2){
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                int num=(s[a]-'0')*10+(s[b]-'0');
                if(num%8==0)
                {
                    cout<<"YES"<<endl<<num;
                    return 0;
                }
            }
        }
    }
    if(n>=3){
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                for(int c=b+1;c<n;c++){
                    int num=(s[a]-'0')*100+(s[b]-'0')*10+(s[c]-'0');
                    if(num%8==0){
                        cout<<"YES"<<endl<<num;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NO";

}
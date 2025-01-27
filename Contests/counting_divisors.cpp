#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int longestConsecutive(vector<int>& v) {
        map<int,int>mp;
        int n=v.size();
        for(int a=0;a<n;a++){
            mp[v[a]]++;
        }
        int seq=1;
        int maxseq=0;
        auto itr=mp.begin();
        int a=0;
        while(a<mp.size()-1){
            int val=itr->first;
            itr++;
            if(val+1==itr->first){
                seq++;
            }
            else{
                maxseq=max(maxseq,seq);
                seq=1;
            }
            a++;
        }
        maxseq=max(maxseq,seq);
        return maxseq;
    }
int main()
{
   fastio
    vector<int> v={100,4,200,1,3,2} ;
    cout<<longestConsecutive(v)<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,k;
vector<int>a;
multiset<int>lst,rst;
int ansLeft=0,ansRight=0;
void insert(int val){
    int x=*lst.rbegin();
    if(x<val){
        rst.insert(val);
        ansRight+=val;
        while(rst.size()>k/2){
            int temp=*rst.begin();
            lst.insert(temp);
            rst.erase(rst.find(temp));
        }
    }
    else{
        lst.insert(val);
        ansLeft+=val;
        while(lst.size()>(k+1)/2){
            int temp=*lst.rbegin();
            rst.insert(temp);
            lst.erase(lst.find(temp));
        }
    }
}
void erase(int val){
    if(rst.find(val)!=rst.end()){
        rst.erase(rst.find(val));
        ansRight-=val;
    }
    else{
        lst.erase(lst.find(val));
        ansLeft-=val;
    }
    if(!lst.size()){
        int temp=*rst.begin();
        lst.insert(temp);
        rst.erase(rst.find(temp));
        ansLeft+=temp;
        ansRight-=temp;
    }
}

int median(){
    return (k%2 ? (*lst.rbegin()):0);
}

int main()
{
   fastio
    cin>>n;cin>>k;
    vector<int>v(n,0);
    vector<int>ans;
    for(int a=0;a<n;a++)cin>>v[a];
    for(int a=0;a<n;a++){
        if(a<k-1){
            insert(v[a]);
        }
        else{
            ans.push_back(ansRight-ansLeft);
            erase(v[a-k]);
            insert(v[a]);
        }
    }
    for(int a=0;a<ans.size();a++)
    cout<<ans[a]<<" ";
}   
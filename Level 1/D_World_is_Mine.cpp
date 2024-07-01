#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define vi vector<int>

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    vector<int>cakes(n,0);
    for(int i=0;i<n;i++) cin>>cakes[i];
    sort(cakes.begin(),cakes.end());
    for(int a=0;a<n;a++) mp[cakes[a]]++;
    // for(auto [key,val]:mp){
    //     cout<<"key: "<<key<<" "<<"val "<<val<<endl; }
    vector<pair<int,int>>freq;
    for(auto it:mp){
        freq.push_back({it.second,it.first});
    }
    int cnt=0;
    sort(freq.begin(),freq.end());
    int ap=0;
    int bp=0;
    auto it=mp.begin();
    for(int a=0;a<n;a++){
        // cout<<"key: "<<it->first<<" "<<"val "<<it->second<<endl; 
        if(it->second==0){
            it++;
        }
        mp[it->first]--;
        cnt++;
        if(mp[freq[bp].second]==0)
        bp++;
        mp[freq[bp].second]--;
        it++;
    }
    // for(auto pr:mp)cout<<pr.first<<" "<<pr.second;
    // cout<<endl;
    cout<<cnt<<endl;















    // sort(cakes.begin(),cakes.end());
    // int ap=0;
    // int bp=ap+1;
    // int prevap=0;
    // int prevBob=0;
    // int aliceCnt=0;
    // for(int a=0;a<cakes.size();a++)cout<<cakes[a]<<" ";
    // cout<<endl;
    // while(ap<n){
    //     if(ap==0){
    //         aliceCnt++;
    //         prevap=ap;
    //         bp=prevap+1;
    //     }
    //     else if()
    // }
    
    
    
    // while(true){
    //     if(ap==0){
    //         aliceCnt++;
    //         ap+=2;
    //         bp=prevAliceCake+1;
    //     }
    //     else{
    //         if(cakes[prevAliceCake]<cakes[ap])
    //         {   prevAliceCake=ap;
    //             aliceCnt++;
    //             ap+=2;
    //             bp=prevAliceCake+1;
    //         }
    //         else if(ap>=n)break;
    //         else break;
    //     }
    // }
    // cout<<aliceCnt<<endl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}
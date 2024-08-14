#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cassert>
#include <array>
#include <string>
#include <cstring>
#include <chrono>
using namespace std;
using namespace std::chrono;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define sp " "

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n,m;cin>>n>>m;
    string sen;cin>>sen;
    vi ind(m);
    for(int a=0;a<m;a++){
        cin>>ind[a];
        ind[a]--;
    }   
    // for(int a=0;a<m;a++)
    // cout<<ind[a]<<" ";
    string chn;cin>>chn;
    sort(all(ind));
    map<int,int>indmp;
    map<char,int>chmp;
    sort(all(chn));
    // for(int a=0;a<n;a++){
    //     indmp[ind[a]]++;
    // }
    // for(int a=0;a<m;a++){
    //     chmp[chn[a]]++;
    // }
    // for(auto [k,v]:chmp){
    //     cout<<k<<sp<<v<<nl;
    // }
    // cout<<nl;
    string changer="";
    int chnst=0;
    int chnen=m-1;
    for(int a=0;a<m-1;a++){
        // cout<<changer<<nl;
        if(ind[a]==ind[a+1]){
            changer+=chn[chnen--];
        }
        else{
            changer+=chn[chnst++];
        }
        // if(indmp[ind[a]]==1){
        //     if(chmp[chn[chnst]]==1)
        //     changer+=chn[chnst++];
        //     else
        //     changer+=chn[chnst];
        //     indmp[ind[a]]--;
        // }
        // else{
        //     if(chmp[chn[chnen]]==1)
        //     changer+=chn[chnen--];
        //     else{
        //         changer+=chn[chnen];
        //     }
        //     indmp[ind[a]]--;
        // }
    }
    changer+=chn[chnst];
    // cout<<changer<<nl;
    for(int a=0;a<m;a++){
        sen[ind[a]]=changer[a];
    }
    cout<<sen<<nl;
}

signed main(){

    fastio
    int tc;cin>>tc;
    while(tc--){
    solve();
    }
}



//template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
//template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
//
//struct starter{
//   high_resolution_clock::time_point t1, t2;
//
//   starter() {
//       ios::sync_with_stdio(0); cin.tie(0);
//       t1 = high_resolution_clock::now();
//   }
//   ~starter() {
//      t2 = high_resolution_clock::now();
//       duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//       cerr <<  time_span.count();
//       }
//} starter_;
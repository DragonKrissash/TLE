#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define input(v) for(int a=0;a<v.size();a++)cin>>v[a]
#define X first
#define Y second

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);

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

#define int int64_t
#define pb push_back
#define sz(x) (int)(x.size())
#define ALL(x) (x).begin(),(x).end()
#define F0R(i,R) for(int i = (0); i < (R); ++i)
#define FOR(i,L,R) for(int i = (L); i <= (R); ++i)

using namespace std;
using namespace std::chrono;

template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; } 

struct starter{
	high_resolution_clock::time_point t1, t2;

	starter() {
		ios::sync_with_stdio(0); cin.tie(0);
		t1 = high_resolution_clock::now();
	}
	~starter() {
		t2 = high_resolution_clock::now();
		duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
		cerr << "It took " << time_span.count() << " seconds.";
	}
} starter_;

int n;
bool vis[305][305][305];
double dp[305][305][305];
double f(int c1,int c2,int c3){
    if(c1==0 and c2==0 and c3==0)return 0.;
    if(vis[c1][c2][c3])return dp[c1][c2][c3];
    vis[c1][c2][c3]=1;
    double &ans=dp[c1][c2][c3];
    ans=1;
    if(c1>0)
    ans+=1.0*c1/n*f(c1-1,c2,c3);
    if(c2>0)
    ans+=1.0*c2/n*f(c1+1,c2-1,c3);
    if(c3>0)
    ans+=1.0*c3/n*f(c1,c2+1,c3-1);
    double p0=1.0*(n-c1-c2-c3)/n;
    ans/=1.0-p0;
    
    return ans;
}

void solve(){
    cin>>n;
    vector<int>cnt(4);
    for(int a=0;a<n;a++){
        int x;cin>>x;
        cnt[x]++;
    }
    cout<<fixed<<setprecision(10);
    cout<<f(cnt[1],cnt[2],cnt[3]);
}

signed main(){

    fastio
    int tc=1;
    while(tc--){
    solve();
    }
}
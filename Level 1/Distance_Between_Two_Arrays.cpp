#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define X first
#define Y second
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        bool y=false;
        for(int a=0;a<arr1.size();a++){
            y=true;
            for(int b=0;b<arr2.size();b++){
                if(abs(arr1[a]-arr2[b])<=d)
                y=false;
                break;
            }
            if(y)count++;

        }
        return count;
    }

int main()
{
   fastio

}
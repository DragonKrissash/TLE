    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'
    #define ll long long
    #define vi vector<int>

    #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

    void solve(){
        ll A,B;
        cin>>A>>B;
        if(B==1)
        cout<<"NO"<<endl;
        else if(B==2){
            cout<<"YES"<<endl<<A<<" "<<3*A<<" "<<4*A<<endl;
        }
        else{
            cout<<"YES"<<endl<<A<<" "<<(B-1)*A<<" "<<A*B<<endl;
        }

    }

    signed main(){

        fastio
        int tc;cin>>tc;
        while(tc--){
        solve();
        }
    }
    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'
    #define ll long long
    #define vi vector<int>
    #define all(v) v.begin(),v.end()

    #define fastio ios::sync_with_stdio(false);cin.tie(NULL);

    void solve(){
        int n;cin>>n;
        int t=n;
        int k,x;cin>>k>>x;
        vector<int> v;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int a=0;a<n;a++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            if(k==1)cout<<"NO"<<endl;
            else{
                if(n%2==0){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int a=0;a<n/2;a++)
                    cout<<2<<" ";
                    cout<<endl;
                }
                else{
                    if(k>=3){
                        cout<<"YES"<<endl;
                        cout<<n/2<<endl;
                        for(int a=0;a<n/2-1;a++)
                        cout<<2<<" ";
                        cout<<3<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }

    signed main(){

        fastio
        int tc;cin>>tc;
        while(tc--){
        solve();
        }
    }
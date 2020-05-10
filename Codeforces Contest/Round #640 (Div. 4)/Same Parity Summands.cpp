#include <bits/stdc++.h> 
using namespace std;
#define int long long int

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        int n,k;
        cin>>n>>k;
        if(n%2==0 && k%2!=0){
            if(n/2<k){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<"2"<<" ";
                }
                cout<<n-2*(k-1);
                cout<<endl;
            }
        }
        else{
            if(n<k || (n%2!=0 && k%2==0)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<"1"<<" "; 
                }
                cout<<n-(k-1)<<endl;
            }
        }
    }
    return 0 ;
}

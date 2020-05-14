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
        int n,m;
        cin>>n>>m;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        if(n==2){
            cout<<m<<endl;
            continue;
        }
        int ans=m*2;
        cout<<ans<<endl;
    }

    return 0 ;

}

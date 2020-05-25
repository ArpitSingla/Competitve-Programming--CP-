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
       int a,b;
       cin>>a>>b;
       int ans=min(max(2*a,b),max(a,2*b));
       cout<<ans*ans<<endl; 
    }

    return 0 ;

}

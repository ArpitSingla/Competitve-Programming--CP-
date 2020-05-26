#include <bits/stdc++.h> 
using namespace std;
#define int long long int

// what a solution. Just analyse by looking at each value and making paths from them.We would know that moving all Right and the down would producethe smallest sum. And now just increment sum by 1 by placing Down before evry right.

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
        int i,j,n,m;
        cin>>i>>j>>n>>m;
        int ans=(m-j)*(n-i)+1;
        cout<<ans<<endl;
    }

    return 0 ;

}

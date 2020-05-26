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
        int count=0;
        if(m%2==0){
            count=n*m/2;
        }
        else{
            count+=n*(m-1)/2;
            if(n%2==0){
                count+=n/2;
            }
            else{
                count+=(n-1)/2+1;
            }
        }
        cout<<count<<endl;
    }

    return 0 ;

}

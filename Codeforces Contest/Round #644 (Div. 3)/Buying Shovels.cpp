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
        int ans=1;
        if(n<=k){
            cout<<"1"<<endl;
            continue;
        }
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if((n/i)>ans && (n/i)<=k){
                    ans=n/i;
                }
                if(i>ans && i<=k){
                    ans=i;
                }
            }
        }
        cout<<n/ans<<endl;
    }
    return 0 ;
}

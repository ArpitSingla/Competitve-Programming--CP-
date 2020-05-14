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
        int n;
        cin>>n;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        int temp=n/2;
        int sum=0;
        for(int i=1;i<=temp;i++){
            sum+=i;
        }
        int ans=sum*8;
        for(int i=1;i<=(n/2)-1;i++){
            ans=ans+4*(2*i)*(i+1);
        }
        cout<<ans<<endl;
    }

    return 0 ;

}

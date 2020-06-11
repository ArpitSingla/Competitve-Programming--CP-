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
        int n,x,m;
        cin>>n>>x>>m;
        int count=0;
        int c,d;
        int l=x,r=x;
        for(int i=0;i<m;i++){
            cin>>c>>d;
            if(d<l|| c>r){
                continue;
            }
            else{
                l=min(l,c);
                r=max(r,d);
            }
        }
        count=r-l+1;
        cout<<count<<endl;
    }

    return 0 ;

}

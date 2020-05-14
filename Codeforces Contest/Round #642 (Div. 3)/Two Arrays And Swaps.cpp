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
        int *a=new int[n];
        int *b=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int ans=0;
        if(a[0]>b[n-1]){
            ans=accumulate(a,a+n,0);
            cout<<ans<<endl;
            continue;
        }
        for(int i=0,j=n-1;i<n && j>=0;i++,j--){
            if(k==0){
                break;
            }
            if(a[i]<b[j]){
                swap(a[i],b[j]);
                k--;
            }
        }
        for(int i=0;i<n;i++){
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    return 0 ;

}

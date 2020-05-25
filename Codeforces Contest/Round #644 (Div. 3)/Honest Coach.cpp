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
       int *arr=new int[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int ans=INT_MAX;
       for(int i=0;i<n-1;i++){
           ans=min(ans,arr[i+1]-arr[i]);
       }
       cout<<ans<<endl; 
    }
 
    return 0 ;
 
}
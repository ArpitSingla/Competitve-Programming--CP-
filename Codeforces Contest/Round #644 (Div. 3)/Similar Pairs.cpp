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
       int even=0,odd=0;
       int flag=0;   
       for(int i=0;i<n;i++){
           if(arr[i]&1){
               odd++;
           }
           else{
               even++;
           }
       }
       if((odd%2==0) && (even%2==0)){
           cout<<"YES"<<endl;
       }
       else{
           sort(arr,arr+n);
           for(int i=0;i<n;i++){
               if(arr[i+1]-arr[i]==1){
                   flag=1;
                   break;
               }
           }
           if(flag){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
    }
    return 0 ;
}

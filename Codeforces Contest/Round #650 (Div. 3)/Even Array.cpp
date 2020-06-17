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
        int flag=0;
        int count=0;
        vector<int> arr(n);
        int counto=0,counte=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(i%2==0 && arr[i]%2==0){
                counte++;
            }
            else if(i%2==1 && arr[i]%2==1){
                counto++;
            }
            else{
                if(arr[i]%2==0){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        int temp=(n-counto-counte);
        if(temp%2!=0 || count!=0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<temp/2<<endl;
        }
    }

    return 0 ;

}

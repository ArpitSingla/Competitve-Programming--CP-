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
        int count=1;
        int a;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]<=count){
                count++;
            }
            if(arr[i]<=i+1){
                count=count+(i+1-count)+1;
            }
        }
        cout<<count<<endl;
    }
    return 0 ;
}

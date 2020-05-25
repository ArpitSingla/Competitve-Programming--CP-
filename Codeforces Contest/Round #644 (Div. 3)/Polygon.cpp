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
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr[i][j]=='1'){
                    if(arr[i+1][j]=='1'||arr[i][j+1]=='1'){
                        continue;
                    }
                    else{
                        flag=false;
                    }
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0 ;

}

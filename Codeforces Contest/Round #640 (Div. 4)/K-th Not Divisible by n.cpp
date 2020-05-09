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
        int num=k/n;
        int temp=k+num;
        int ans=temp/n;
        if(ans-num==0){
            cout<<temp<<endl;
        }
        else{
            while(ans-num!=0){
                temp=temp+(ans-num);
                num=ans;
                ans=temp/n;
            }
            cout<<temp<<endl;
        }
    }
    return 0 ;
}

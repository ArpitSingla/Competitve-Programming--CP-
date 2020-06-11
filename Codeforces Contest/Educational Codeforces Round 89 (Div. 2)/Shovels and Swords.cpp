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
        int a,b;
        int ans=0;
        cin>>a>>b;
        int count=0;
        if(a==0 || b==0){
            ans=0;
        }
        if(a==b && __builtin_popcount(a)==1){
            ans=a/2;
        }
        else if(a<=b){
            if(2*a<=b){
                ans=count+a;
            }
            else{
                int temp=b/2;
                int vari=a-temp;
                ans=temp/2+vari;
            }
        }
        else{
            if(2*b<=a){
                ans=count+b;
            }
            else{
                int temp=a/2;
                int vari=b-temp;
                ans=temp/2+vari; 
            }
        }
        cout<<ans<<endl;
    }

    return 0 ;

}

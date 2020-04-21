#include <bits/stdc++.h> 
using namespace std;

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
        int even=n/2;
        int odd=n/2;
        if(even%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        vector<int> ans;
        for(int i=1;i<=even;i++){
            ans.push_back(i*2);
        }
        for(int i=1;i<=odd;i++){
            if(i<=odd/2){
                ans.push_back((i*2)-1);
            }
            else{
                ans.push_back((i*2)+1);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}

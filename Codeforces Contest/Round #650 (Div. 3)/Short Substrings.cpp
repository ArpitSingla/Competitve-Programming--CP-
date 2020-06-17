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
        string s;
        cin>>s;
        string ans;
        ans.push_back(s[0]);
        ans.push_back(s[1]);
        for(int i=3;i<s.size();i+=2){
            ans.push_back(s[i]);
        }
        cout<<ans<<endl; 
    }

    return 0 ;

}

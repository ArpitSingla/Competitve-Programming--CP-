#include <bits/stdc++.h> 
using namespace std;

int main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin) ;
    // freopen("output.txt", "w", stdout) ;
    // #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;
    while( t-- ) {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        char alpha='a';
        string temp;
        temp.push_back(alpha);
        for(int i=1;i<b;i++){
            temp.push_back(alpha+i);
        }
        int ans=n/b;
        for(int i=0;i<n;i++){
            s=s+temp[i%b];
        }
		cout<<s<<endl;
    }
    return 0 ;
}


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
        string s;
        cin>>s;
        vector<int> v;
        int temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                temp++;
                continue;
            }
            if(s[i]=='1'){
                v.push_back(temp);
                temp=0;
            }
        }
        v.push_back(temp);
        int count=0;
        count+=v[0]/(k+1);
        for(int i=1;i<v.size();i++){
            count+=v[i]/(2*k+1);
        }
        if(v.size()==1 && v[0]<k+1){
            count+=1;
        }
        cout<<count<<endl;
    }

    return 0 ;

}

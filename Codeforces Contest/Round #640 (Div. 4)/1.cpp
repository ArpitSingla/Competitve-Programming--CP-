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
        if(n>0 && n<=9){
            cout<<"1"<<endl;
            cout<<n<<endl;
            continue;
        }
        vector<int> ans;
        int count=0;
        int temp=n;
        while (temp != 0) {
            temp = temp / 10; 
            ++count; 
        }
        int i=1;
        int num;
        while(n!=0){
            num =pow(10,count-i);
            cout<<pow(10,count-i)<<endl;
            cout<<num<<endl;
            int rem=n % num;
            if(rem==0){
                ans.push_back(n);
                break;
            }
            ans.push_back(n-rem);
            n=rem;
            i++;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        } 
        cout<<endl;
    }
    return 0 ;

}

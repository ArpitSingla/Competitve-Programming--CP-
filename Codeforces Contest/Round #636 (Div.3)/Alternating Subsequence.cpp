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
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> ans;
        int curr_p=INT_MIN;
        int curr_n=INT_MIN;
        for(int i=0;i<n;i++){
            if(i==n-1){
                if(arr[i]<0 && arr[i-1]<0){
                    ans.push_back(max(arr[i],curr_n));
                }
                else if(arr[i]>0 && arr[i-1]>0){
                    ans.push_back(max(arr[i],curr_p));
                }
                else{
                    ans.push_back(arr[i]);
                }
                break;
            }
            if(arr[i]<0){
                curr_n=max(curr_n,arr[i]);
                if(arr[i+1]>0){
                    ans.push_back(curr_n);
                    curr_n=INT_MIN;
                }
            }
            else if(arr[i]>0){
                curr_p=max(curr_p,arr[i]);
                if(arr[i+1]<0){
                    ans.push_back(curr_p);
                    curr_p=INT_MIN;
                }
            }
        }
        int sum=0;
         for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        cout<<sum<<endl;
    }
    return 0 ;
}

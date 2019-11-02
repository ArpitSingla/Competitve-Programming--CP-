// #include <iostream>
// using namespace std;

// int largestSum(int **arr,int a){
//     int **dp=new int*[a+3];
//     for(int i=0;i<=a+1;i++){
//         dp[i]=new int[a+3];
//         for(int j=0;j<=a+1;j++){
//             dp[i][j]=0;
//         }
//     }
//     for(int i=1;i<=a;i++){
//         dp[a-1][i]=arr[a-1][i];
//     }
//     for(int i=a-2;i>=0;i--){
//         for(int j=a-1;j>=0;j--){
//             if(j+1>=a){
//                 dp[i][j]=max(arr[i][j]+dp[i+1][j],arr[i][j]+dp[i+1][j-1]);
//             }
//             if(j-1<0){
//                 dp[i][j]=max(arr[i][j]+dp[i+1][j],arr[i][j]+dp[i+1][j+1]);
//             }
//             else{
//                 dp[i][j]=max(arr[i][j]+dp[i+1][j],max(arr[i][j]+dp[i+1][j+1],arr[i][j]+dp[i+1][j-1]));
//             }
//         }
//     }
//     int maxAns=0;
//     for(int i=0;i<a;i++){
//         if(maxAns<dp[0][i]){
//             maxAns=dp[0][i];
//         }
//     }
//     for(int i=0;i<a;i++){
//         delete[] dp[i];
//     }
//     delete [] dp;
//     return maxAns;
// }

// int main() {
// 	int t;
//     cin>>t;
//     while(t--){
//         int a;
//         cin>>a;
//         int **arr=new int*[a+2];
//         for(int i=0;i<=a;i++){
//             arr[i]=new int[a+2];
//             for(int j=1;j<=a;j++){
//                 cin>>arr[i][j];
//             }
//         }
//         int ans=largestSum(arr,a);
//         cout<<ans<<endl;
//         for(int i=0;i<a;i++){
//             delete[] arr[i];
//         }
//         delete[] arr;
//     }
// }

#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    return(a > b)  ? (a > c ? a : c) : (b > c ? b : c);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n][n];
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++)
	            cin >> arr[i][j];
	    }
	    int dp[n][n+2];
	    dp[0][0] = -1;
	    dp[0][n+1] = -1;

	    for(int i = 1; i <= n; i++)
	        dp[0][i] = arr[0][i-1];

	    for(int i = 1; i < n; i++) {
	        for(int j = 0; j <= n + 1; j++) {
	            if(j == 0 || j == n+1)
	                dp[i][j] = -1;
	            else
	                dp[i][j] = arr[i][j-1] + max( dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]);
	        }
	    }
	    int res = 0;
	    for(int i = 1; i < n+1; i++) {
	        if(dp[n-1][i] > res)
	            res = dp[n-1][i];
	    }

	    cout << res << endl;
	}
	return 0;
}

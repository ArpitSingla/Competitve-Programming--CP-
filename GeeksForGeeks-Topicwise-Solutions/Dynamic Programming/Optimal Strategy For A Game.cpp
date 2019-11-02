#include <bits/stdc++.h>
using namespace std;

int memoRecur(int arr[],int i,int j,int sum,int **dp){
    if(j==i+1){
        return max(arr[i],arr[j]);
    }
    if(dp[i][j]>-1){
        return dp[i][j];
    }
    dp[i][j]=max(sum-memoRecur(arr,i+1,j,sum-arr[i],dp),sum-memoRecur(arr,i,j-1,sum-arr[j],dp));
    return dp[i][j];
}

int optimalStrategy(int *arr,int n){
    int sum=accumulate(arr,arr+n,0);
    int **dp=new int*[n];
    for(int i=0;i<n;i++){
        dp[i]=new int[n];
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    return memoRecur(arr,0,n-1,sum,dp);
}

int main() {
	int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int sum=0;
        int *arr=new int[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        int ans=optimalStrategy(arr,a);
        cout<<ans<<endl;
    }
}

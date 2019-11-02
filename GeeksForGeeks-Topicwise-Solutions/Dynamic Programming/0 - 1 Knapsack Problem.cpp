#include <iostream>
using namespace std;

int maxSum(int *wts,int *val,int a,int maxWt,int **dp){
    if(a==0||maxWt==0){
        return 0;
    }
    if(dp[a][maxWt]>-1){
        return dp[a][maxWt];
    }
    int output;
    if(wts[a-1]>maxWt){
        output=maxSum(wts,val,a-1,maxWt,dp);
    }
    else{
        output=max(val[a-1]+maxSum(wts,val,a-1,maxWt-wts[a-1],dp),maxSum(wts,val,a-1,maxWt,dp));
    }
    dp[a][maxWt]=output;
    return output;
}

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,maxWt;
        cin>>a>>maxWt;
        int *wts=new int[a];
        int *val=new int[a];
        for(int i=0;i<a;i++){
            cin>>val[i];
        }
        for(int i=0;i<a;i++){
            cin>>wts[i];
        }
        int **dp=new int*[a+2];
        for(int i=0;i<=a;i++){
            dp[i]=new int[maxWt+2];
            for(int j=0;j<=maxWt;j++){
                dp[i][j]=-1;
            }
        }
        int ans=maxSum(wts,val,a,maxWt,dp);
        cout<<ans<<endl;
    }
}

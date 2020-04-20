#include<bits/stdc++.h>
using namespace std;

int minCost(int **input,int n){
    int *dp=new int[1<<n];
    for(int i=0;i<(1<<n)-1;i++){
        dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(int i=0;i<((1<<n)-1);i++){
        int k=__builtin_popcount(i);
        cout<<k<<endl;
        for(int j=0;j<n;j++){
            if(!(i&(1<<j))){
                int temp=i|(1<<j);
                dp[temp]=min(dp[temp],dp[i]+input[k][j]);
            }
        }
    }
    for(int i=0;i<((1<<n)-1);i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[(1<<n)-1];
}

int main(){
    int n;
    cin>>n;
    int **input=new int*[n];
    for(int i=0;i<n;i++){
        input[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>input[i][j];
        }
    }
    int ans=minCost(input,n);
    cout<<ans<<endl;
    return 0;
}
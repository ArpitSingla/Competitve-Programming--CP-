#include<bits/stdc++.h>
using namespace std;

int solve(int denom[],int num,int n,int **dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(num==0){
        return 0;
    }
    if(dp[n][num]!=-1){
        return dp[n][num];
    }
    
    dp[n][num]=solve(denom+1,num-1,n,dp)+solve(denom,num,n-denom[0],dp);
    return dp[n][num];
}

int countWaysToMakeChange(int denominations[], int numDenominations, int value){
	int **dp=new int*[value+1];
    for(int i=0;i<=value;i++){
        dp[i]=new int[numDenominations+1];
        for(int j=0;j<=numDenominations;j++){
            dp[i][j]=-1;
        }
    }
    return solve(denominations,numDenominations,value,dp);
}

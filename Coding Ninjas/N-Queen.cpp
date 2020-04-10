#include<bits/stdc++.h>
using namespace std;
bool isPossible(int n,vector<vector<int>> &dp,int row,int col){
    for(int i=row-1;i>=0;i--){
        if(dp[i][col]==1){
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(dp[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(dp[i][j]==1){
            return false;
        }
    }
    return true;
}

void printMatrix(int n,vector<vector<int>> &dp,int row){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dp[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(isPossible(n,dp,row,i)){
            dp[row][i]=1;
            printMatrix(n,dp,row+1);
            dp[row][i]=0;
        }
    }
    return;
}

void placeNQueens(int n){
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    printMatrix(n,dp,0);
}

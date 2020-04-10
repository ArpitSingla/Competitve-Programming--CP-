#include<bits/stdc++.h>
using namespace std;

void printSolution(int **dp,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
    }
    cout<<endl;
}

void printMatrix(int **dp,int maze[][20],int n,int x,int y){
    if(x==n-1 && y==n-1){
        dp[x][y]=1;
     	printSolution(dp,n);
        dp[x][y]=0;
        return;
    }
    else if(x>=n || y>=n || x<0 || y<0 || maze[x][y]==0|| dp[x][y]==1 ){
        return;
    }
    dp[x][y]=1;
    printMatrix(dp,maze,n,x-1,y);
    printMatrix(dp,maze,n,x+1,y);
    printMatrix(dp,maze,n,x,y-1);
    printMatrix(dp,maze,n,x,y+1);
    dp[x][y]=0;
}

void ratInAMaze(int maze[][20], int n){
    int **dp=new int*[n];
    for(int i=0;i<n;i++){
        dp[i]=new int[n];
    }
    printMatrix(dp,maze,n,0,0);
}

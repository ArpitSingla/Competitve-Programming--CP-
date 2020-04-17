#include<bits/stdc++.h>
using namespace std;

int solvei(int **input,int row,int col){
    int **dp=new int*[3];
    for(int i=0;i<3;i++){
        dp[i]=new int[3];
        for(int j=0;j<=3;j++){
            dp[i][j]=0;
        }
    }
    dp[0][0]=input[0][0];
    for(int i=1;i<3;i++){
        dp[0][i]=dp[0][i-1]+input[0][i];
        dp[i][0]=dp[i-1][0]+input[i][0];
    }
    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+input[i][j];
        }
    }
    return dp[2][2];
}

int solve(int **input,int si,int sj,int ei,int ej){
    if(si==ei && sj==ej){
        return input[si][sj];
    }
    if(si>ei || sj>ej){
        return INT_MAX;
    }
    int op1=solve(input,si+1,sj,ei,ej);
    int op2=solve(input,si,sj+1,ei,ej);
    int op3=solve(input,si+1,sj+1,ei,ej);
    int ans=min(op1,min(op2,op3))+input[si][sj];
    return ans;
}

int main(){
    int ** input = new int*[3];
	input[0] = new int[3];
	input[1] = new int[3];
	input[2] = new int[3];
	input[0][0] = 4;
	input[0][1] = 3;
	input[0][2] = 2;
	input[1][0] = 1;
	input[1][1] = 8;
	input[1][2] = 3;
	input[2][0] = 1;
	input[2][1] = 1;
	input[2][2] = 8;
    int ans=solvei(input,3,3);
    cout<<ans<<endl;
    int ans2=solve(input,0,0,2,2);
    cout<<ans2<<endl;
    return 0;
}

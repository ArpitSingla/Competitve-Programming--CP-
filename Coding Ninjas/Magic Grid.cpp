#include <bits/stdc++.h>
using namespace std;

int minEnergy(int **input,int r,int c){
	vector<vector<int>> dp(r+2,vector<int>(c+2,INT_MAX));
    dp[r+1][c]=1;
    dp[r][c+1]=1;
    for(int i=r;i>0;i--){
        for(int j=c;j>0;j--){
            dp[i][j]=min(dp[i+1][j],dp[i][j+1])-input[i][j];
            if(dp[i][j]<=0){
                dp[i][j]=1;
            }
        }
    }
    return dp[1][1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int **input=new int*[r+1];
        for(int i=0;i<=r;i++){
            input[i]=new int[c+1];
        }
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cin>>input[i][j];
            }
        }
        int ans=minEnergy(input,r,c);
        cout<<ans<<endl;
    }
    return 0;
}

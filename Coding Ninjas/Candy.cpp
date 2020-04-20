long long solve(int like[][MAXN],int N){    //Iterative Solution
	long long *dp=new long long[1<<N];
    for(int i=0;i<N;i++){
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=0;i<(1<<N)-1;i++){
        int k=__builtin_popcount(i);
        for(int j=0;j<N;j++){
            if((i&(1<<j))==0 && like[k][j]==1){
                int temp=i|1<<j;
                dp[temp]+=dp[i];
            }
        }
    }
    return dp[(1<<N)-1];
}


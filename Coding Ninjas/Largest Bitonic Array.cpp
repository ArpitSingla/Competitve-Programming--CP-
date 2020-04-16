int longestBitonicSubarray(int *input, int n) {	
    int *inc=new int[n];
    int *dec=new int[n];
	inc[0]=1;
    dec[n-1]=1;
    for(int i=1;i<n;i++){
        inc[i]=1;
        for(int j=0;j<i;j++){
            if(input[j]>=input[i]){
                continue;
            }
            int ans=inc[j]+1;
            if(ans>inc[i]){
                inc[i]=ans;
            }
        }
    }
    for(int i=n-2;i>=0;i--){
        dec[i]=1;
        for(int j=n-1;j>i;j--){
            if(input[j]>=input[i]){
                continue;
            }
            int ans=dec[j]+1;
            if(ans>dec[i]){
                dec[i]=ans;
            }
        }
    }
    int maxAns=inc[0]+dec[0]-1;
    for(int i=1;i<n;i++){
        if(inc[i]+dec[i]-1>maxAns){
            maxAns=inc[i]+dec[i]-1;
        }
    }
    delete [] inc;
    delete [] dec;
    return maxAns;
}
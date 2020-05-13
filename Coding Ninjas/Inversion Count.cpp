long long merge(int A[],int n,int left,int mid,int right){
	int i=left;
    int j=mid;
    int k=0;
    long long invcount=0;
    int *temp=new int[right-left+1];
    while(i<mid && j<=right){
        if(A[i]<=A[j]){
            temp[k++]=A[i++];
        }
        else{
            temp[k++]=A[j++];
            invcount+=mid-i;
        }
    }
    while(i<mid){
        temp[k++]=A[i++];
    }
    while(j<=right){
        temp[k++]=A[j++];
    }
    for(int i=left, k=0; i<=right; i++, k++)
	{
		A[i]=temp[k];
	}
    return invcount;
}

long long mergeS(int A[],int n,int left,int right){
    long long count=0;
    if(left<right){
        int mid=(left+right)/2;
        count+=mergeS(A,n,left,mid);
        count+=mergeS(A,n,mid+1,right);
        count+=merge(A,n,left,mid+1,right);
    }
    return count;
}

long long solve(int A[], int n)
{
    return mergeS(A,n,0,n-1);
}
bool checkMaxHeap(int arr[], int n){
    int pi=0;
    int lci=2*pi+1;
    int rci=2*pi+2;
    while(lci<n){
        if(arr[pi]<arr[lci]){
            return false;
        }
        if(rci<n && arr[pi]<arr[rci]){
            return false;
        }
        pi++;
        lci=2*pi+1;
    	rci=2*pi+2;
    }
    return true;
}

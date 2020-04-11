#include<bits/stdc++.h>
using namespace std;

int minAbsoluteDiff(int arr[], int n) {
    sort(arr,arr+n);
    int mini=INT_MAX;
	for(int i=0;i<n-1;i++){
		int temp=abs(arr[i+1]-arr[i]);
		if(temp<mini){
			mini=temp;
		}
	}
    return mini;
}

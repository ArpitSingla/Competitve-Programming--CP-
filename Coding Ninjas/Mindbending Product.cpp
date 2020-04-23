#include<bits/stdc++.h>
using namespace std;

void prodArr(int *arr,int n){
    int *prod=new int[n];
    prod[0]=1;
    for(int i=1;i<n;i++){
        prod[i]=prod[i-1]*arr[i-1];
    }
    int right=1;
    for(int i=n-1;i>=0;i--){
        prod[i]=prod[i]*right;
        right*=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<prod[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prodArr(arr,n);
    return 0;
}
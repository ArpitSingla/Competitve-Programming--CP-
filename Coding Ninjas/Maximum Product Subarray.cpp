#include<bits/stdc++.h>
using namespace std;

int maxProd(int *arr,int n){
    int max_ending_here=1;
    int min_ending_here=1;
    int best_ans=INT_MIN;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            flag=1;
            max_ending_here=max_ending_here*arr[i];
            min_ending_here=min(min_ending_here*arr[i],1);
        }
        else if(arr[i]==0){
            max_ending_here=1;
            min_ending_here=1;
        }
        else{
            int temp=max_ending_here;
            max_ending_here=max(min_ending_here*arr[i],1);
            min_ending_here=temp*arr[i];
        }
        if(best_ans<max_ending_here){
            best_ans=max_ending_here;
        }
    }
    if(flag==1 && max_ending_here==1){
        return 0;
    }
    return best_ans;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maxProd(arr,n);
    cout<<ans<<endl;
    return 0;
}
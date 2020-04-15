#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int cost=0;
    for(int j=1;j<n-1;j++){
        if(abs(arr[i])>abs(arr[j]) || (abs(arr[i])==abs(arr[j]) && arr[i]>0)){
            cost+=(j-i)*arr[i]+(j*j-i*i)*arr[i]*arr[i];
            i=j;
        }
    }
    cost+=(n-1-i)*arr[i]+((n-1)*(n-1)-i*i)*arr[i]*arr[i];
    cout<<cost<<endl;
    return 0;
}
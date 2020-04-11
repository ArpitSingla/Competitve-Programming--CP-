#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int *arr=new long long int[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<long long int>());
    long long int count=0;
    for(long long int i=0;i<n;i++){
    	count+=arr[i]*pow(2,i);
    }
    cout<<count<<endl;
    return 0;
}
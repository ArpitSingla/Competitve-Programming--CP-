#include<bits/stdc++.h>
using namespace std;

class job{
    public:
    int start;
    int finish;
    int profit;
};

bool compare(job a,job b){
    return a.finish<b.finish;
}

int binarySearch(job *arr,int i){
    int lo=0,hi=i-1;                                  // O(nlogn) solution
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid].finish<=arr[i].start){
            if(arr[mid+1].finish<=arr[i].start){
                lo=mid+1;
            }
            else{
                return mid;
            }
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    job *arr=new job[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].start>>arr[i].finish>>arr[i].profit;
    }
    sort(arr,arr+n,compare);
    int *dp=new int[n];
    dp[0]=arr[0].profit;
    for(int i=1;i<n;i++){
        int including=arr[i].profit;
        int lnconflict=-1;
        // for(int j=i-1;j>=0;j--){
        //     if(arr[j].finish<=arr[i].start){          //O(N^2) solution
        //         lnconflict=j;
        //         break;
        //     }
        // }
        lnconflict=binarySearch(arr,i);
        if(lnconflict!=-1){
            including+=dp[lnconflict];
        }
        dp[i]=max(including,dp[i-1]);
    }
    int ans=dp[n-1];
    cout<<ans<<endl;
    return 0;
}
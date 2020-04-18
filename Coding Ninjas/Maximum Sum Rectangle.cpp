#include <bits/stdc++.h>
using namespace std;
#define int long long int

int kadane(vector<int>& sum,int n){
    int curr_ans=0;
    int best_ans=INT_MIN;
    for(int i=0;i<n;i++){
        curr_ans+=sum[i];
        if(best_ans<curr_ans){
            best_ans=curr_ans;
        }
        if(curr_ans<0){
            curr_ans=0;
        }
    }
    return best_ans;
}

int maximumSum(int **dp,int n,int m){
    int left=0,right=0;
    int best=INT_MIN;
    for(left=0;left<m;left++){
        vector<int> sum(n,0);
        for(right=left;right<m;right++){
            for(int i=0;i<n;i++){
                sum[i]+=dp[i][right];
            }
            int ans=kadane(sum,n);
            if(best<ans){
                best=ans;
            }
            if(ans<0){
                ans=0;
            }
        }
    }
    return best;
}

int32_t main(){
    int n,m;
    cin>>n>>m;
    int **dp = new int*[n];
    for(int i=0;i<n;++i){
        dp[i]  =  new int[m];
        for(int j=0;j<m;++j){
            cin>>dp[i][j];
        }
    }
    cout << maximumSum(dp, n, m) << endl;
	return 0;
}
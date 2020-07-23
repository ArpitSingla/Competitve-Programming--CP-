#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> time(n,vector<int>(3,0));
	    for(int i=0;i<n;i++){
	        cin>>time[i][0];
	    }
	    for(int i=0;i<n;i++){
	        cin>>time[i][1];
	        time[i][2]=i+1;
	    }
	    sort(time.begin(),time.end(),comp);
	    vector<int> dp;
	    dp.push_back(time[0][2]);
	    int temp=time[0][1];
	    for(int i=1;i<n;i++){
            if(temp<=time[i][0]){
                dp.push_back(time[i][2]);
                temp=time[i][1];
            }
	    }
	    for(int i=0;i<dp.size();i++){
	        cout<<dp[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
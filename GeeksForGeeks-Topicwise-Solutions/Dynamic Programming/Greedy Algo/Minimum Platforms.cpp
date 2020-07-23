#include <bits/stdc++.h>
using namespace std;

class Time{
    public:
    int start;
    int end;
};

bool comp(Time a,Time b){
    return a.start<b.start;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    Time *station=new Time[n];
	    for(int i=0;i<n;i++){
	        cin>>station[i].start;
	    }
	    for(int i=0;i<n;i++){
	        cin>>station[i].end;
	    }
	    sort(station,station+n,comp);
	    vector<vector<int>> ans;
	    int st=station[0].start;
	    int ed=station[0].end;
	    ans.push_back({st,ed});
	    for(int i=1;i<n;i++){
	        int flag=0;
	        for(int j=ans.size()-1;j>=0;j--){
	            if(ans[j][1]<station[i].start){
	                ans[j][1]=station[i].end;
	                flag=1;
	                break;
	            }
	        }
	        if(!flag){
	            ans.push_back({station[i].start,station[i].end});
	        }
	    }
	    cout<<ans.size()<<endl;
	}
}
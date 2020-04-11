#include<bits/stdc++.h>
using namespace std;

class activity{
    public:
	int s;
    int f;
};

bool compare(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second<b.second);
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> time;
    activity ob;
    for(int i=0;i<n;i++){
        cin>>ob.s>>ob.f;
        time.push_back(make_pair(ob.s,ob.f));
    }
    sort(time.begin(),time.end(),compare);
    int ans=1;
    int j=0;
    for(int i=0;i<n-1;i++){
        if(time[j].second<=time[i+1].first){
            ans++;
            j=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
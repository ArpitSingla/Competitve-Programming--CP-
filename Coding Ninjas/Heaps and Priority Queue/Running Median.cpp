#include<bits/stdc++.h>
using namespace std;

void findMedian(int arr[], int n){
	priority_queue<int> maxpq;
    priority_queue<int,vector<int>,greater<int>> minpq;
    maxpq.push(arr[0]);
    cout<<arr[0]<<endl;
    for(int i=1;i<n;i++){
        if(arr[i]<maxpq.top()){
            maxpq.push(arr[i]);
        }
        else{
            minpq.push(arr[i]);
        }
        if(maxpq.size()==minpq.size()){
            int ans=(maxpq.top()+minpq.top())/2;
            cout<<ans<<endl;
        }
        else if(maxpq.size()>minpq.size()){
            if(maxpq.size()-minpq.size()>1){
                int temp=maxpq.top();
                maxpq.pop();
                minpq.push(temp);
                cout<<(maxpq.top()+minpq.top())/2<<endl;
            }
            else{
                cout<<maxpq.top()<<endl;
            }
        }
        else if(minpq.size()>maxpq.size()){
            if(minpq.size()-maxpq.size()>1){
                int temp=minpq.top();
                minpq.pop();
                maxpq.push(temp);
                cout<<(maxpq.top()+minpq.top())/2<<endl;
            }
            else{
                cout<<minpq.top()<<endl;
            }
        }
    }
    return;
}

#include<bits/stdc++.h>
using namespace std;
int buyTicket (int *arr, int n, int k){
    priority_queue<int> pq;
    pair<int,int> temp;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        temp=make_pair(arr[i],i);
        q.push(temp);
        pq.push(arr[i]);
    }
    int ans=0;
    while(true){
        int temp;
        if(q.front().first>=pq.top()){
            ans++;
            temp=q.front().second;
            q.pop();
            pq.pop();
        }
        else{
            pair<int,int> p;
            p=q.front();
            q.pop();
            q.push(p);
        }
        if(temp==k){
            return ans;
        }
    }
    return ans;
}

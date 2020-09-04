#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> ppi;

vector<int> mergeKSortedArrays(vector<vector<int>*> arr){
    vector<int> output;
    priority_queue<ppi, vector<ppi>, greater<ppi> > pq; 
    ppi input;
    for(int i=0;i<arr.size();i++){
        input=make_pair(arr[i][0],make_pair(i,0));
        pq.push(input);
    }
    while(!pq.empty()){
        ppi curr = pq.top();
        pq.pop();
        int i = curr.second.first;
        int j = curr.second.second;
        output.push_back(curr.first);
        if(j+1 < arr[i]->size()){
            input=make_pair(arr[i][j+1],make_pair(i,j+1));
            pq.push(input);
        }
    }
    return output;
}

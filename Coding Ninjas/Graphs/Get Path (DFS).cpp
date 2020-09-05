#include <bits/stdc++.h>
using namespace std;

vector<int> getPath(vector<vector<int>> &edges,int n,int si,int ei,vector<bool> &visited){
    if(si==ei){
        vector<int> path;
        path.push_back(ei);
        return path;
    }
    visited[si]=true;
    vector<int> ret;
    for(int i=0;i<n;i++){
        if(edges[si][i]==1 && !visited[i]){
            vector<int> output=getPath(edges,n,i,ei,visited);
            if(output.size()){
                output.push_back(si);
                return output;
            }
        }
    }
    return ret;
}

int main(){
    int v,e,si,ei;
    cin>>v>>e;
    vector<vector<int>> edges(v,vector<int>(v,0));
    int s,f;
    for(int i=0;i<e;i++){
        cin>>s>>f;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    vector<bool> visited(v,false);
    cin>>si>>ei;
    vector<int> ans=getPath(edges,v,si,ei,visited);
    int size=ans.size();
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

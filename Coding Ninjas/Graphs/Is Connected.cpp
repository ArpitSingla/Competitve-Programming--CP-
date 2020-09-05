#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &edges,int n,int si,vector<bool> &visited){
    visited[si]=true;
    for(int i=0;i<n;i++){
        if(edges[si][i]==1 && !visited[i]){
            DFS(edges,n,i,visited);
        }
    }
}

int main() {
    int v,e;
    cin >> v >> e;
    vector<vector<int>> edges(v,vector<int>(v,0));
    int s,f;
    for(int i=0;i<e;i++){
        cin>>s>>f;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    vector<bool> visited(v,false);
    DFS(edges,v,0,visited);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
}
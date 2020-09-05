#include <bits/stdc++.h>
using namespace std;

void printDFS(vector<vector<int>> &edges,int v,int st,vector<bool> &visited){
    cout<<st<<" ";
    visited[st]=true;
    for(int i=0;i<v;i++){
        if(i==st){
            continue;
        }
        if(edges[st][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,v,i,visited);
        }
    }
}

void DFS(vector<vector<int>> &edges,int v){
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            printDFS(edges,v,i,visited);
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
    DFS(edges,v);
}

#include <bits/stdc++.h>
using namespace std;

void printBFS(vector<vector<int>> &edges,int v,int st,vector<bool> &visited){
    queue<int> q;
    q.push(st);
    visited[st]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cout<<temp<<" ";
        for(int i=0;i<v;i++){
            if(edges[temp][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

void BFS(vector<vector<int>> &edges,int v){
    vector<bool> visited(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            printBFS(edges,v,i,visited);
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
    BFS(edges,v);
}

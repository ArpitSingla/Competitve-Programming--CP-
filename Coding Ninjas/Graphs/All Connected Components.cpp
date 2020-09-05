#include <bits/stdc++.h>
using namespace std;

void printDFS(vector<vector<int>> &edges,int n,int st,vector<bool> &visited,vector<int> &ans){
    ans.push_back(st);
    visited[st]=true;
    for(int i=0;i<n;i++){
        if(edges[st][i]==1 && !visited[i]){
            printDFS(edges,n,i,visited,ans);
        }
    }
}

vector<vector<int>> DFS(vector<vector<int>> &edges,int n){
    vector<bool> visited(n,false);
    vector<vector<int>> result;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            vector<int> ans;
            printDFS(edges,n,i,visited,ans);
            result.push_back(ans);
        }
    }
    return result;
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> edges(n,vector<int>(n,0));
    int s,f;
    for(int i=0;i<e;i++){
        cin>>s>>f;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    vector<vector<int>> ans=DFS(edges,n);
    for(auto i:ans){
        sort(i.begin(),i.end());
        for(auto p:i){
            cout<<p<<" ";
        }
        cout<<endl;
    }
}

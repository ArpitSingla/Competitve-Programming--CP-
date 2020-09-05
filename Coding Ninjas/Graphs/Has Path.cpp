#include <bits/stdc++.h>
using namespace std;

bool hasPath(vector<vector<int>> &edges,int n,int si,int ei,vector<bool> &visited){
    if(edges[si][ei]==1){
        return true;
    }
    visited[si]=true;
    for(int i=0;i<n;i++){
        if(edges[si][i]==1 && !visited[i]){
            if(hasPath(edges,n,i,ei,visited)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n,e;
    cin >> n >> e;
    vector<vector<int>> edges(n,vector<int>(n,0));
    int s,f;
    for(int i=0;i<e;i++){
        cin>>s>>f;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    int si,ei;
    cin>>si>>ei;
    vector<bool> visited(n,false);
    bool ans=hasPath(edges,n,si,ei,visited);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

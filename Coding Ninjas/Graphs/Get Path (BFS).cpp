#include <bits/stdc++.h>
using namespace std;

vector<int> getPath(vector<vector<int>> &edges,int n,int si,int ei,vector<bool> &visited){
    queue<int> q;
    map<int,int> m;
    int flag=0;
    q.push(si);
    m[si]=-1;
    visited[si]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edges[temp][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
                m[i]=temp;
                if(i==ei){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            break;
        }
    }
    vector<int> ans;
    for(auto i:m){
        if(m.find(ei)!=m.end()){
            ans.push_back(ei);
            ei=m[ei];
        }
    }
    return ans;
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
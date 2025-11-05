// Depth first search
#include<iostream>
#include<vector>
using namespace std;
void DFS(int v,vector<vector<int>> &adj,vector<bool> &visited){
    visited[v]=true;
    cout<<v<<" ";
    for( int u:adj[v]){
        if(!visited[u]){
            DFS(u,adj,visited);
        }
    }
}
int main(){
    int V=4;
    vector<vector <int>> adj(V);
    adj[0]={1,2};
    adj[1]={2};
    adj[2]={3};   
    vector<bool> visited(V,false);
    cout<<"DFS starting from vertex 0: ";
    DFS(0,adj,visited);

}
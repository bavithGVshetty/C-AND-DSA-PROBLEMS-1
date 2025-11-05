#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V=4;
    vector<vector<int>>adjList(V);
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(2);
    adjList[2].push_back(3);
    // 0-1 and 0-2 and son
    cout<<"Adjacency List:\n";
    for (int i = 0; i <V; i++)
    {
        cout<<i<<"->";
        for(int j:adjList[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
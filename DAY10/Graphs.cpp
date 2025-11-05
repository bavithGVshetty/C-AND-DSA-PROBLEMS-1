// Graphs
// Non linear data structure
// Nodes(vertices) and edges(Relationships)

// A graph is a non linear DS that represents
// relationship btwn vertices. 

// G=(V,E) 

// Terminology
// 1.Vertex-> A single node.
// 2.Edge/Relationship-> Connection btw two vertices.
// 3.Weight-> Cost Associated with an edge
// 4.Degree-> Number of edges incident on vertex
// 4.Adjacent vertices-> num of virtices connectes by an edge 
// 5.Path->Sequence of vertices connected by edges
// 6.Cycle->Path where First vertex=Last vertex
// 7.Connected Graph->All vertices are reachable from each other
// 8.Disconnected Graph->All vertices are not reachable
// 9.Directed graph->Edges have specific direction(->)
// 10.Undirected Graph->Edges have no direction
// 11.Weighted Graph->Edges carry Weights
// 12.Unweighted Graph-> Edges has no weights

// 2.TYPES OF GRAPHS
// 1.Directed and undirected
// 2.Wighted and unweighted
// 3.Simple and multigraph
// 4.Connected and Disconnected

// IMPLEMENTATION OF GRAPHS
// 1)Adjacency Matrix
// 2)Adjacency List

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V=4;
    vector<vector <int>> adjMatrix(V,vector<int>(V,0));
    // Adding values
    adjMatrix[0][1]=1;
    adjMatrix[0][2]=1;
    adjMatrix[1][2]=1;
    adjMatrix[2][3]=1;
    cout<<"Adjacency Matrix:\n ";

    for (int i = 0; i <V; i++)
    {
       for (int j = 0; j < V; j++)
       {
        cout<<adjMatrix[i][j]<<" ";
       }
       cout<<endl;       
    }    

}
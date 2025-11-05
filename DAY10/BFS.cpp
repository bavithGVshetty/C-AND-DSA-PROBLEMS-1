// Breadth First Search
// Lets use queue
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int start, vector<vector<int>> &adj)
{
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}

int main()
{
    int V = 4;
    vector<vector<int>> adj(V);
    adj[0]={1,2};
    adj[1]={2};
    adj[2]={3};
    cout<<"BFS starting from vertex 0: ";
    BFS(0,adj);
}

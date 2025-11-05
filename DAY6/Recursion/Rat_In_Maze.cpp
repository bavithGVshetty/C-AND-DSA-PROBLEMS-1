#include <iostream>
#include <vector>
using namespace std;
#define N 4
// Recursive function

bool isSafe(const vector<int> &maze, int x, int y, int n)
{
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x * N + y]);
}
bool solveMazeUtil(const vector<int> &maze, int x, int y, vector<int> &sol, int n)
{
    if (x == N - 1 && y == N - 1)
    {
        sol[x * N + y] = 1;
        return true;
    }
    if (isSafe(maze, x, y, N))
    {
        sol[x * N + y] = 1;
        // Right
        if (solveMazeUtil(maze, x, y + 1, sol, N))
        {
            return true;
        }
        // Down
        if (solveMazeUtil(maze, x + 1, y, sol, N))
        {
            return true;
        }

        sol[x * N + y] = 0;
        return false;
    }
    return false;
}

void solveMaze(const vector<int> &maze, int n)
{
    vector<int> sol(N * N, 0);
    if (!solveMazeUtil(maze, 0, 0, sol, N))
    {
        cout << "Solution does not exists" << endl;
    }
    return;
}
int main()
{
    vector<int> maze(N * N);

    cout << "Enter the maze matrix (1=Open, 0=Close): ";
    for (int i = 0; i < N * N; i++)
    {
        cin >> maze[i];
    }
    cout << "The user input Maze is : " << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << maze[i * N + j] << " ";
        }
        cout << endl;
    }

    solveMaze(maze, N);
}

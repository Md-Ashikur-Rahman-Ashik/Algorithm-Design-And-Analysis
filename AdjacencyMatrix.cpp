#include <bits/stdc++.h>
using namespace std;

void initMatrix(int adjacencyMatrix[][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void addEdge(int adjacencyMatrix[][6], int u, int v)
{
    adjacencyMatrix[u][v] = 1;
    adjacencyMatrix[v][u] = 1;
}

void printMatrix(int adjacencyMatrix[][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; i < 6; j++)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }

        cout << "\n";
    }
}

int main()
{
    int adjacencyMatrix[6][6];

    initMatrix(adjacencyMatrix);

    addEdge(adjacencyMatrix, 0, 3);
    addEdge(adjacencyMatrix, 0, 4);
    addEdge(adjacencyMatrix, 1, 4);
    addEdge(adjacencyMatrix, 2, 5);
    addEdge(adjacencyMatrix, 2, 3);

    printMatrix(adjacencyMatrix);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void initMatrix(int adjacencyMatrix[][6])       // Received two dimensional matrix of size six from main function
{
    for (int i = 0; i < 6; i++)         // Written loop for iterating over rows
    {
        for (int j = 0; j < 6; j++)     // Written loop for iterating over columns
        {
            adjacencyMatrix[i][j] = 0;  // Assigned initial value zero to each and every element of the adjacency matrix
        }
    }
}

void addEdge(int adjacencyMatrix[][6], int u, int v)        // Received two dimensional matrix, source node and destination node from main fucntion
{
    adjacencyMatrix[u][v] = 1;      // Assigned value one to the element which indicates a connection between source to node 
    adjacencyMatrix[v][u] = 1;      // Assigned value one to the element which indicates a connection between node to source
}

void printMatrix(int adjacencyMatrix[][6])      // Received adjacency matrix of size six
{
    for (int i = 0; i < 6; i++)         // Written outer loop for iterating over rows
    {
        for (int j = 0; i < 6; j++)     // Written inner loop for iterating over columns
        {
            cout << adjacencyMatrix[i][j] << " ";       // Printed each element in every iteration
        }

        cout << "\n";                   // Added new line after printing every row
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
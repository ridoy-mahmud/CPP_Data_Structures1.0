
#include <iostream>
using namespace std;

int graph[10][10] = {0}, v, visited[10], j, connection[10];
int vertices, edges, k, row, column, step = 1, queue[10], front = 0, rear = 0;

int main()
{
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    for (k = 1; k <= edges; k++)
    {
        cin >> row >> column;
        graph[row][column] = 1;
    }

    for (row = 1; row <= vertices; row++)
    {
        for (column = 1; column <= vertices; column++)
        {
            cout << graph[row][column] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the starting vertex: ";
    cin >> v;
    cout << "BFS order: " << v << " ";
    visited[v] = 1;

    while (step < vertices)
    {
        for (j = 1; j <= vertices; j++)
        {
            if (graph[v][j] == 1 && visited[j] == 0 && connection[j] == 0)
            {
                connection[j] = 1;
                queue[rear] = j;
                rear = rear + 1;
            }
        }
        v = queue[front];
        front = front + 1;
        cout << v << " ";
        visited[v] = 1;
        connection[v] = 0;
        step++;
    }
}
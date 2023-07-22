
#include <iostream>
using namespace std;
int weightedG[10][10] = {0}, v, visited[10], a, b;
int vertices, edges, k, row, column, step = 1, Min, mincost = 0;
int main()
{
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    for (row = 1; row <= vertices; row++)
    {
        for (column = 1; column <= vertices; column++)
        {
            cin >> weightedG[row][column];
            if (weightedG[row][column] == 0)
                weightedG[row][column] = 100;
        }
    }
    for (row = 1; row <= vertices; row++)
    {
        for (column = 1; column <= vertices; column++)
        {
            cout << weightedG[row][column] << " ";
        }
        cout << "\n";
    }
    cout << "Enter the starting vertex: ";
    cin >> v;
    visited[v] = 1;

    while (step < vertices)
    {
        Min = 100;
        for (row = 1; row <= vertices; row++)
        {
            for (column = 1; column <= vertices; column++)
            {
                if (weightedG[row][column] < Min)
                {
                    if (visited[row] == 1)
                    {
                        Min = weightedG[row][column];
                        a = row;
                        b = column;
                    }
                }
            }
        }
        if (visited[a] == 0 || visited[b] == 0)
        {
            cout << "Edge (" << a << ", " << b << ")=" << Min << "\n";
            mincost = mincost + Min;
            visited[b] = 1;
            step++;
        }
        weightedG[a][b] = weightedG[b][a] = 100;
    }
    cout << "MST cost: " << mincost;
}
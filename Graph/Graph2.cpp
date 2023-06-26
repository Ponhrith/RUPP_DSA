//exercise 4

#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int u, v;
};

class Graph
{
public:
    vector<vector<int>> adjList;

    Graph(vector<Edge> const &edges, int n)
    {
        adjList.resize(n);

        for (auto &edge : edges)
        {
            adjList[edge.u].push_back(edge.v);
            adjList[edge.v].push_back(edge.u); // add reverse edge
        }
    }
};

void printGraph(Graph const &graph, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int v : graph.adjList[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<Edge> edges =
        {
            {0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 3}, {2, 3}, {2, 4}, {2, 5}, {3, 5}};
    int n = 6;
    Graph graph(edges, n);

    printGraph(graph, n);

    return 0;
}
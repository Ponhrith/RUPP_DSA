#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int v, w;
};
class Graph
{

public:
    vector<vector<int>> adjList;
    Graph(vector<Edge> const &egdes, int n)
    {
        adjList.resize(n);

        for (auto &edge : egdes)
        {
            adjList[edge.v].push_back(edge.w);
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
            {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}};
    int n = 6;
    Graph graph(edges, n);

    printGraph(graph, n);
    cout << endl;
    cout << "Exercise 1"<<endl;

    vector<Edge> edges1 =
        {
            {0, 1}, {0, 2}, {0, 3}, {1, 3}, {1, 4}, {2, 3}, {3, 4}};

    int n1 = 5;
    Graph graph1(edges1, n1);

    printGraph(graph1, n1);
   
   //
   
    cout << endl;
    cout << "Exercise 2"<<endl;

    vector<Edge> edges2 =
        {
            {1, 2}, {1, 3}, {2, 4}, {2, 5}, {3, 6}, {4, 7}, {5, 7}, {6, 5}, {6, 7}};

    int n2 = 7;
    Graph graph2(edges2, n2);

    printGraph(graph2, n2);
   //
   
    cout << endl;
    cout << "Exercise 3"<<endl;

    vector<Edge> edges3 =
        {
            {0, 1}, {1, 2}, {2, 0}, {2, 3}, {2, 5}, {3, 4}, {3, 6}, {4, 6}, {5, 7}, {6, 3}};

    int n3 = 8;
    Graph graph3(edges3, n3);

    printGraph(graph3, n3);

    return 0;
}
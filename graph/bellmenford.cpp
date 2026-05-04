#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v, wt;
};

vector<Edge> edges;

void bellmanFord(int n, int src)
{
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto e : edges)
        {
            if (dist[e.u] != INT_MAX && dist[e.u] + e.wt < dist[e.v])
            {
                dist[e.v] = dist[e.u] + e.wt;
            }
        }
    }

    // Check negative cycle
    for (auto e : edges)
    {
        if (dist[e.u] != INT_MAX && dist[e.u] + e.wt < dist[e.v])
        {
            cout << "Negative Cycle Detected!" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Distance from source to " << i << " = " << dist[i] << endl;
    }
}

int main()
{
    int n = 5;

    edges.push_back({0, 1, -1});
    edges.push_back({0, 2, 4});
    edges.push_back({1, 2, 3});
    edges.push_back({1, 3, 2});
    edges.push_back({1, 4, 2});
    edges.push_back({3, 2, 5});
    edges.push_back({3, 1, 1});
    edges.push_back({4, 3, -3});

    bellmanFord(n, 0);

    return 0;
}
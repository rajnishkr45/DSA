#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v, wt;
};

vector<Edge> edges;

int parent[100], rank1[100];

int find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        parent[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}

void kruskal(int n)
{
    sort(edges.begin(), edges.end(), [](Edge a, Edge b)
         { return a.wt < b.wt; });

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank1[i] = 0;
    }

    int cost = 0;

    for (auto e : edges)
    {
        if (find(e.u) != find(e.v))
        {
            unionSet(e.u, e.v);
            cost += e.wt;
        }
    }

    cout << "MST Cost (Kruskal): " << cost << endl;
}

int main()
{
    int n = 5;

    edges.push_back({0, 1, 2});
    edges.push_back({0, 3, 6});
    edges.push_back({1, 2, 3});
    edges.push_back({1, 3, 8});
    edges.push_back({1, 4, 5});
    edges.push_back({2, 4, 7});

    kruskal(n);

    return 0;
}
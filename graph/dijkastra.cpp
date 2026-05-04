#include <bits/stdc++.h>
using namespace std;

#define P pair<int, int>

vector<P> adj[100];

void dijkstra(int n, int src)
{
    vector<int> dist(n, INT_MAX);
    priority_queue<P, vector<P>, greater<P>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        P temp = pq.top();
        pq.pop();

        int d = temp.first;
        int node = temp.second;

        for (auto it : adj[node])
        {
            int wt = it.first;
            int next = it.second;

            if (dist[node] + wt < dist[next])
            {
                dist[next] = dist[node] + wt;
                pq.push({dist[next], next});
            }
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

    adj[0].push_back({2, 1});
    adj[0].push_back({4, 2});

    adj[1].push_back({1, 2});
    adj[1].push_back({7, 3});

    adj[2].push_back({3, 4});

    adj[3].push_back({1, 4});

    dijkstra(n, 0);

    return 0;
}
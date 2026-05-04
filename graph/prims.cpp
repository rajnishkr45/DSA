#include <bits/stdc++.h>
using namespace std;

#define P pair<int, int>

vector<P> adj[100];

void prim(int n)
{
    priority_queue<P, vector<P>, greater<P>> pq;
    vector<bool> visited(n, false);

    pq.push({0, 0});
    int cost = 0;

    while (!pq.empty())
    {
        P temp = pq.top();
        pq.pop();

        int wt = temp.first;
        int node = temp.second;

        if (visited[node])
            continue;

        visited[node] = true;
        cost += wt;

        for (auto it : adj[node])
        {
            if (!visited[it.second])
            {
                pq.push(it);
            }
        }
    }

    cout << "MST Cost (Prim): " << cost << endl;
}

int main()
{
    int n = 5;

    adj[0].push_back({2, 1});
    adj[1].push_back({2, 0});

    adj[0].push_back({6, 3});
    adj[3].push_back({6, 0});

    adj[1].push_back({3, 2});
    adj[2].push_back({3, 1});

    adj[1].push_back({8, 3});
    adj[3].push_back({8, 1});

    adj[1].push_back({5, 4});
    adj[4].push_back({5, 1});

    adj[2].push_back({7, 4});
    adj[4].push_back({7, 2});

    prim(n);

    return 0;
}
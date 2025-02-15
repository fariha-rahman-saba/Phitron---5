#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18 + 5;
struct Edge {
    int u, v;
    long long w;
};

vector<Edge> edges;
vector<long long> dist;
int n, m;

bool bellmanFord(int src) {
    dist.assign(n + 1, INF);
    dist[src] = 0;

    for (int i = 1; i <= n - 1; ++i) {
        for (const auto& edge : edges) {
            if (dist[edge.u] < INF && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    for (const auto& edge : edges) {
        if (dist[edge.u] < INF && dist[edge.u] + edge.w < dist[edge.v]) {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> n >> m;

    edges.resize(m);
    for (int i = 0; i < m; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }

    int source;
    cin >> source;

    if (!bellmanFord(source)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int q;
    cin >> q;

    while (q--) {
        int dest;
        cin >> dest;

        if (dist[dest] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}

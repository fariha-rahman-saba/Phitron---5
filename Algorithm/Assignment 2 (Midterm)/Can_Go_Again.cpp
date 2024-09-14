#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+5;
struct Edge {
    int u, v, w;
};

vector<Edge> edges;
vector<int> dist;
int n, m;

bool bellmanFord(int src) {
    dist.assign(n + 1, INF);
    dist[src] = 0;

    for (int i = 1; i <= n - 1; ++i) {
        for (auto &edge : edges) {
            if (dist[edge.u] < INF && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    for (auto &edge : edges) {
        if (dist[edge.u] < INF && dist[edge.u] + edge.w < dist[edge.v]) {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> n >> m;

    if (n == 0 || m == 0) {
        cout << "Not Possible" << endl;
        return 0;
    }

    edges.resize(m);
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
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

        if (source == dest) {
            cout << 0 << endl;
        } else if (dist[dest] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}

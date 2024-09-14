#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;
vector<pair<int, int>> adj[1001];
vector<int> dist;
int n, m;

void dijkstra(int src) {
    dist.assign(n + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[src] = 0;
    pq.push({0, src});
    
    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (d > dist[u]) continue;
        
        for (auto edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
    }

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    int q;
    cin >> q;

    while (q--) {
        int src, dest;
        cin >> src >> dest;

        dijkstra(src);

        if (dist[dest] == INF) {
            cout << -1 << endl;
        } else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}

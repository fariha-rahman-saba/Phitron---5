#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<pair<int, int>> adj[1001];
vector<int> dist;

void dijkstra(int src, int n) {
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
    int n, m;
    cin >> n >> m;

    if (n == 0) {
        int q;
        cin >> q;
        while (q--) {
            int dest, max_cost;
            cin >> dest >> max_cost;
            cout << "NO" << endl;
        }
        return 0;
    }
    
    if (m == 0) {
        int q;
        cin >> q;
        while (q--) {
            int dest, max_cost;
            cin >> dest >> max_cost;
            if (dest == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        if (u >= 1 && u <= n && v >= 1 && v <= n && w >= 0) {
            adj[u].push_back({v, w});
        }
    }
    
    int source;
    cin >> source;
    
    if (source < 1 || source > n) {
        cout << "NO" << endl;
        return 0;
    }

    dijkstra(source, n);
    
    int q;
    cin >> q;
    
    while (q--) {
        int dest, max_cost;
        cin >> dest >> max_cost;
        
        if (dest < 1 || dest > n) {
            cout << "NO" << endl;
        } else if (dist[dest] <= max_cost) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

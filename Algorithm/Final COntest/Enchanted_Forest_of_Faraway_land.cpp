#include <bits/stdc++.h>
using namespace std;

class Tree {
public:
    vector<vector<int>> adj;
    unordered_map<int, vector<int>> values;

    Tree(int n) {
        adj.resize(n + 1);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void insertValue(int u, int x) {
        values[u].push_back(x);
    }

    void deleteValue(int u, int x) {
        auto& vals = values[u];
        auto it = find(vals.begin(), vals.end(), x);
        if (it != vals.end()) {
            vals.erase(it);
        }
    }

    void findPath(int u, int target, vector<int>& path, vector<bool>& visited) {
        path.push_back(u);
        visited[u] = true;

        for (int neighbor : adj[u]) {
            if (!visited[neighbor]) {
                findPath(neighbor, target, path, visited);
                if (path.back() == target) return;
            }
        }
        if (path.back() != target) path.pop_back();
    }

    int findsmallest(int u, int v, int k) {
        vector<bool> visited(adj.size(), false);
        vector<int> path;
        findPath(u, v, path, visited);

        vector<int> cv;
        for (int node : path) {
            cv.insert(cv.end(), values[node].begin(), values[node].end());
        }

        sort(cv.begin(), cv.end());
        if (k > cv.size()) return -1;
        return cv[k - 1];
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Tree tree(n);

    for (int i = 0; i < m; i++) {
        int u, w;
        cin >> u >> w;
        tree.addEdge(u, w);
    }

    int q;
    cin >> q;

    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "insert") {
            int u, x;
            cin >> u >> x;
            tree.insertValue(u, x);
        } else if (cmd == "delete") {
            int u, x;
            cin >> u >> x;
            tree.deleteValue(u, x);
        } else if (cmd == "find") {
            int u, w, k;
            cin >> u >> w >> k;
            cout << tree.findsmallest(u, w, k) << "\n";
        }
    }

    return 0;
}

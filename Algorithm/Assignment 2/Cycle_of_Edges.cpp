#include <bits/stdc++.h>
using namespace std;

vector<int> parent, rankk;

void dsu_init(int n) {
    parent.resize(n + 1);
    rankk.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rankk[i] = 0;
    }
}

int Find(int node) {
    if (parent[node] == node) return node;
    return parent[node] = Find(parent[node]);
}

void Union(int u, int v) {
    int leader_u = Find(u);
    int leader_v = Find(v);
    
    if (leader_u != leader_v) {
        if (rankk[leader_u] > rankk[leader_v]) {
            parent[leader_v] = leader_u;
        } else if (rankk[leader_u] < rankk[leader_v]) {
            parent[leader_u] = leader_v;
        } else {
            parent[leader_v] = leader_u;
            rankk[leader_u]++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    dsu_init(n);
    
    int cycle_edges = 0;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        if (Find(u) == Find(v)) {
            cycle_edges++;
        } else {
            Union(u, v);
        }
    }
    
    cout << cycle_edges << endl;
    
    return 0;
}

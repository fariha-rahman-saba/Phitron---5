#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool comp(Edge a, Edge b) {
    return a.w < b.w;
}

const int N = 1e5 + 10;
int leader[N];
int group_size[N];

void dsu_init(int n) {
    for (int i = 1; i <= n; i++) {
        leader[i] = -1;
        group_size[i] = 1;
    }
}

int Find(int node) {
    if (leader[node] == -1)
        return node;
    return leader[node] = Find(leader[node]);
}

void Union(int x, int y) {
    int leaderA = Find(x);
    int leaderB = Find(y);

    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            leader[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            leader[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> EdgeList;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }

    sort(EdgeList.begin(), EdgeList.end(), comp);

    dsu_init(n);
    long long total_cost = 0;
    int edges_used = 0;

    for (Edge ed : EdgeList) {
        int u_leader = Find(ed.u);
        int v_leader = Find(ed.v);

        if (u_leader != v_leader) {
            Union(ed.u, ed.v);
            total_cost += ed.w;
            edges_used++;
        }
    }

    int main_leader = Find(1);
    bool all_connected = true;
    for (int i = 1; i <= n; i++) {
        if (Find(i) != main_leader) {
            all_connected = false;
            break;
        }
    }

    if (all_connected) {
        cout << total_cost << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

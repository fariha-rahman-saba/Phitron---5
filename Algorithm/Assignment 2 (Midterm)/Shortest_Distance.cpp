#include <bits/stdc++.h>

using namespace std;

const long long INF = 1e18 + 5;
const int N = 1005;

#define ll long long int

ll adj[N][N];

int main() {
    ll n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            adj[i][j] = INF;
            if (i == j) adj[i][j] = 0;
        }
    }

    for (int i = 0; i < e; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], (ll)c);
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (adj[i][k] < INF && adj[k][j] < INF) {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }

        for (int i = 1; i <= n; ++i) {
            if (adj[i][i] < 0) {
                cout << "Negative Cycle Detected" << endl;
                return 0;
            }
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int src, dest;
        cin >> src >> dest;

        if (adj[src][dest] == INF) {
            cout << "-1" << endl;
        } else {
            cout << adj[src][dest] << endl;
        }
    }

    return 0;
}
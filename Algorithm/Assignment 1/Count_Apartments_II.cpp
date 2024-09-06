#include <bits/stdc++.h>
using namespace std;

char graph[1001][1001];
bool vis[1001][1001];

int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] == '.' && !vis[x][y]);
}

int bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int roomCount = 0;

    while (!q.empty()) {
        auto [nrow, ncol] = q.front();
        q.pop();
        roomCount++;

        for (int i = 0; i < 4; i++) {
            int ci = nrow + dx[i];
            int cj = ncol + dy[i];
            if (valid(ci, cj)) {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }

    return roomCount;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> apartmentSizes;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == '.' && !vis[i][j]) {
                int size = bfs(i, j);
                apartmentSizes.push_back(size);
            }
        }
    }

    sort(apartmentSizes.begin(), apartmentSizes.end());

    if (apartmentSizes.empty()) {
        cout << endl;
    } else {
        for (size_t i = 0; i < apartmentSizes.size(); i++) {
            cout << apartmentSizes[i];
            if (i < apartmentSizes.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

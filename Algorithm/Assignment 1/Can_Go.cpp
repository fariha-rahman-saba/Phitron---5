#include <bits/stdc++.h>
using namespace std;

bool vis[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[20][20];

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return a[i][j] == '.' || a[i][j] == 'B';
}

bool bfs(int startX, int startY, int targetX, int targetY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    vis[startX][startY] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == targetX && y == targetY) {
            return true;
        }

        for (auto [dx, dy] : d) {
            int nx = x + dx;
            int ny = y + dy;
            if (valid(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A') {
                start = {i, j};
            } else if (a[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));
    
    if (bfs(start.first, start.second, end.first, end.second)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

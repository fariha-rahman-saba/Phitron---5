#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
char grid[N][N];
bool visited[N][N];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m;

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y]);
}

int bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;
    int area = 1;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isValid(newX, newY)) {
                q.push({newX, newY});
                visited[newX][newY] = true;
                area++;
            }
        }
    }
    return area;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    int minArea = INT_MAX;
    bool foundComponent = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                int area = bfs(i, j);
                minArea = min(minArea, area);
                foundComponent = true;
            }
        }
    }

    if (foundComponent) {
        cout << minArea << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

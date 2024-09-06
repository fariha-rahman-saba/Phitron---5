#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1000][1000];
bool visited[1000][1000];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && (grid[x][y] == '.' || grid[x][y] == 'B') && !visited[x][y]);
}

bool bfs(int startX, int startY, int targetX, int targetY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == targetX && y == targetY) {
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (isValid(newX, newY)) {
                visited[newX][newY] = true;
                q.push({newX, newY});
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
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                start = {i, j};
            } else if (grid[i][j] == 'B') {
                end = {i, j};
            }
        }
    }
    
    memset(visited, false, sizeof(visited));
    
    if (bfs(start.first, start.second, end.first, end.second)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

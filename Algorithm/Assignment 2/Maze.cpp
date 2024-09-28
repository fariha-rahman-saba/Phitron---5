#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool bfs(int startX, int startY, vector<vector<char>>& maze) {
    int n = maze.size();
    int m = maze[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    
    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (maze[x][y] == 'D') {
            while (x != startX || y != startY) {
                if (maze[x][y] != 'D') {
                    maze[x][y] = 'X';
                }
                tie(x, y) = parent[x][y];
            }
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < n && newY >= 0 && newY < m && maze[newX][newY] != '#' && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({newX, newY});
                parent[newX][newY] = {x, y};
            }
        }
    }
    
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> maze(n, vector<char>(m));
    int startX, startY;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'R') {
                startX = i;
                startY = j;
            }
        }
    }

    if (!bfs(startX, startY, maze)) {
        maze[startX][startY] = 'R';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}

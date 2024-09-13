#include <bits/stdc++.h>
using namespace std;

char grid[20][20];
bool visited[20][20];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;

bool isValid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '-' || visited[i][j])
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (auto dir : directions) {
            int ni = x + dir.first;
            int nj = y + dir.second;
            
            if (isValid(ni, nj)) {
                q.push({ni, nj});
                visited[ni][nj] = true;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    if (n == 0 || m == 0) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int si, sj, ti, tj;
    cin >> si >> sj >> ti >> tj;

    if (si < 0 || si >= n || sj < 0 || sj >= m || ti < 0 || ti >= n || tj < 0 || tj >= m) {
        cout << "NO" << endl;
        return 0;
    }

    if (grid[si][sj] == '-' || grid[ti][tj] == '-') {
        cout << "NO" << endl;
        return 0;
    }

    if (si == ti && sj == tj) {
        cout << "YES" << endl;
        return 0;
    }

    memset(visited, false, sizeof(visited));

    bfs(si, sj);

    if (visited[ti][tj]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

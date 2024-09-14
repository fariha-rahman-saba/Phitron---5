#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<vector<char>> matrix(N, vector<char>(N));
vector<vector<bool>> vis(N, vector<bool>(N));
int rows, cols;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y) {
    return (x >= 0 && x < rows && y >= 0 && y < cols && matrix[x][y] == '.' && !vis[x][y]);
}

void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny)) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> rows >> cols;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            vis[i][j] = false;
        }
    }

    dfs(x1, y1);

    if (vis[x2][y2]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

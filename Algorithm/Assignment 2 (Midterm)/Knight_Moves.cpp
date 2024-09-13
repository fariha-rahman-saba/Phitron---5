#include <bits/stdc++.h>
using namespace std;

const vector<pair<int, int>> knightMoves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int minKnightMoves(int n, int m, int startX, int startY, int endX, int endY) {
    if (startX == endX && startY == endY) {
        return 0;
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<tuple<int, int, int>> q;
    q.push({startX, startY, 0});
    visited[startX][startY] = true;

    while (!q.empty()) {
        auto [x, y, dist] = q.front();
        q.pop();

        for (const auto& move : knightMoves) {
            int newX = x + move.first;
            int newY = y + move.second;

            if (newX == endX && newY == endY) {
                return dist + 1;
            }

            if (isValid(newX, newY, n, m) && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({newX, newY, dist + 1});
            }
        }
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        int startX, startY;
        cin >> startX >> startY;

        int endX, endY;
        cin >> endX >> endY;

        cout << minKnightMoves(n, m, startX, startY, endX, endY) << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> graph;
vector<vector<bool>> visited;
int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y) {
  return (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] == '.' && !visited[x][y]);
}

void dfs(int x, int y, int &roomCount) {
  visited[x][y] = true;
  roomCount++;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (valid(nx, ny)) {
      dfs(nx, ny, roomCount);
    }
  }
}

int main() {
  cin >> n >> m;

  graph.resize(n, vector<char>(m));
  visited.resize(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> graph[i][j];
    }
  }

  vector<int> apartmentSizes;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (graph[i][j] == '.' && !visited[i][j]) {
        int roomCount = 0; 
        dfs(i, j, roomCount);
        apartmentSizes.push_back(roomCount);
      }
    }
  }

  sort(apartmentSizes.begin(), apartmentSizes.end());

  if (apartmentSizes.empty()) {
    cout << "0" << endl;
  } else {
    for (size_t i = 0; i < apartmentSizes.size(); i++) {
      cout << apartmentSizes[i];
      if (i < apartmentSizes.size() - 1) cout << " ";
    }
    cout << endl;
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int W) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (weight[i - 1] <= j) {
                int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][W];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, W;
        cin >> n >> W;

        int weight[n], value[n];
        for (int i = 0; i < n; i++) {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> value[i];
        }

        cout << knapsack(n, weight, value, W) << endl;
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool canPartition(int n, int a[], int target_sum) {
    vector<vector<bool>> dp(n + 1, vector<bool>(target_sum + 1, false));
    
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= target_sum; j++) {
            if (a[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][target_sum];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int total_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int target_sum = total_sum / 2;
            if (canPartition(n, a, target_sum)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

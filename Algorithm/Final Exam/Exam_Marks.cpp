#include <bits/stdc++.h>
using namespace std;

bool canAchievePerfectScore(int n, vector<int>& marks, int m) {
    int target = 1000 - m;
    if (target < 0) return false;

    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int mark : marks) {
        for (int i = target; i >= mark; --i) {
            if (dp[i - mark]) {
                dp[i] = true;
            }
        }
    }
    return dp[target];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> marks(n);
        for (int i = 0; i < n; i++) {
            cin >> marks[i];
        }

        if (canAchievePerfectScore(n, marks, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

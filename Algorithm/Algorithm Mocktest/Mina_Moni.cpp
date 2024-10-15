#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        int total = accumulate(c.begin(), c.end(), 0);
        int half = n / 2;
        int minDiff = INT_MAX;

        for (int m = 0; m < (1 << n); m++) {
            vector<int> chosen;
            for (int i = 0; i < n; i++) {
                if (m & (1 << i)) {
                    chosen.push_back(c[i]);
                }
            }
            if (chosen.size() == (n % 2 == 0 ? half : half + 1)) {
                int sumChosen = accumulate(chosen.begin(), chosen.end(), 0);
                int sumRemaining = total - sumChosen;
                minDiff = min(minDiff, abs(sumChosen - sumRemaining));
            }
        }
        cout << minDiff << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    long long left_sum = 0;
    for (int i = 0; i < n; i++) {
        long long right_sum = total - left_sum - arr[i];
        if (left_sum == right_sum) {
            cout << arr[i] + left_sum << " " << i + 1 << "\n";
            return 0;
        }
        left_sum += arr[i];
    }

    cout << "UNSTABLE\n";
    return 0;
}

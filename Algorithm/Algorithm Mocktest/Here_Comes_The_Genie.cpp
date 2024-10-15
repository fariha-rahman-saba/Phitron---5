#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    unordered_set<int> used;
    long long total_balls = 0;

    for (int i = 0; i < n; i++) {
        for (int count = a[i]; count > 0; count--) {
            if (used.find(count) == used.end()) {
                used.insert(count);
                total_balls += count;
                break;
            }
        }
    }

    cout << total_balls << endl;
    return 0;
}

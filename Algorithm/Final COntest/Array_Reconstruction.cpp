#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int r[n-2];
        long long cs = 0;

        for (int i = 0; i < n - 2; i++) {
            cin >> r[i];
            cs += r[i];
        }

        long long ts;
        cin >> ts;

        long long req = ts - cs;

        if (req < 0) {
            cout << "0\n";
            continue;
        }

        long long count = req + 1;
        
        cout << count << "\n";
    }

    return 0;
}

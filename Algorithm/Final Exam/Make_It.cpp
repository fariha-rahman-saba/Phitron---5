#include <bits/stdc++.h>
using namespace std;

bool canReach(int N) {
    while (N > 1) {
        if (N % 2 == 0) {
            N /= 2;
        } else if (N >= 3) {
            N -= 3;
        } else {
            return false;
        }
    }
    return N == 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (canReach(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

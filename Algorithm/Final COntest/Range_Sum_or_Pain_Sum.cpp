#include <iostream>
using namespace std;

long long range_sum(int l, int r) {
    long long sum = 0;
    for (int i = l; i <= r; i++) {
        if (i % 2 == 1) {
            sum += (i + 1) / 2;
        } else {
            sum += i / 2;
        }
    }
    return sum;
}

int main() {
    int n, q;
    cin >> n >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << range_sum(l, r) << "\n";
    }

    return 0;
}

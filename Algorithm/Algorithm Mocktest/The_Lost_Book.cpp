#include <bits/stdc++.h>
using namespace std;

int findBook(int books[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (books[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    int books[n];
    
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }
    cin >> target;

    int index = findBook(books, n, target);
    cout << index << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string word1, word2;
    while (cin >> word1 >> word2) {
        int j = 0;
        for (int i = 0; i < word1.size(); i++) {
            if (word1[i] == word2[j]) {
                j++;
            }
            if (j == word2.size()) {
                break;
            }
        }
        if (j == word2.size()) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}

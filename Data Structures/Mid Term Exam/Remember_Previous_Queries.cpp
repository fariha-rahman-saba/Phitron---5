#include <bits/stdc++.h>
using namespace std;

void print_from_left(list<int>& ll) {
    cout << "L -> ";
    for (auto it = ll.begin(); it != ll.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void print_from_right(list<int>& ll) {
    cout << "R -> ";
    list<int> tmpll = ll;
    tmpll.reverse();
    for (auto it = tmpll.begin(); it != tmpll.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    list<int> ll;

    while (t--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            ll.push_front(v);
        } else if (x == 1) {
            ll.push_back(v);
        } else if (x == 2) {
            if (v < 0 || v >= ll.size()) {
                
            } else {
                auto it = next(ll.begin(), v);
                ll.erase(it);
            }
        }

        print_from_left(ll);
        print_from_right(ll);
    }

    return 0;
}

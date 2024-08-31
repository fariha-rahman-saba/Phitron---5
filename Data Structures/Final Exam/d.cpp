#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        minHeap.push(e);
    }
    
    int q;
    cin >> q;
    while (q--) {
        int cmd;
        cin >> cmd;
        
        if (cmd == 0) {
            int nw;
            cin >> nw;
            minHeap.push(nw);
            cout << minHeap.top() << endl;
        } else if (cmd == 1) {
            if (!minHeap.empty()) {
                cout << minHeap.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (cmd == 2) {
            if (!minHeap.empty()) {
                minHeap.pop();
                if (!minHeap.empty()) {
                    cout << minHeap.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool adj[1000][1000] = {false};

int main() {
    int n, e;
    cin >> n >> e;
    
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = true;
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if(u==v)
        {
            cout << "YES" << endl;
        }
        else if (adj[u][v]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

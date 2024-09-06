#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];  
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);  
    }

    int q;
    cin >> q;

    while (q--)
    {
        int node;
        cin >> node;

        if (adj[node].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(adj[node].rbegin(), adj[node].rend());

            for (int i = 0; i < adj[node].size(); i++)
            {
                if (i > 0) cout << " ";  
                cout << adj[node][i];
            }
            cout << endl;
        }
    }

    return 0;
}

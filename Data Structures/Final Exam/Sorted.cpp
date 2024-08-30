#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int t;
    cin >> t;
    int n;
    int e;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            s.insert(e);
        }
        for(auto it: s) cout<<it<<" ";
        cout<<endl;
        s.clear();
    }

    return 0;
}
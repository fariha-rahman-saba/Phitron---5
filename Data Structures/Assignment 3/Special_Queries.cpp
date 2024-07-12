#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, q;
    string s;
    queue<string> que;
    cin >> t;
    while (t--)
    {
        cin >> q;
        if (q == 0)
        {
            cin >> s;
            que.push(s);
        }
        else
        {
            if (que.empty())
            {
                cout << "Invalid" << endl;
            }

            else
            {
                cout << que.front() << endl;
                que.pop();
            }
        }
    }

    return 0;
}
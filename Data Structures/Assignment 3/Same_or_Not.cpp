#include <bits/stdc++.h>
using namespace std;

bool same_or_not(stack<int> st, queue<int> que)
{
    int a, b;

    if (st.size() != que.size())
    {
        return false;
    }

    else
    {
        while (!st.empty() && !que.empty())
        {
            a = st.top();
            b = que.front();
            st.pop();
            que.pop();
            if (a != b)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    stack<int> st;
    queue<int> que;

    int n, m, e;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        st.push(e);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> e;
        que.push(e);
    }

    bool res = same_or_not(st, que);
    if (res)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}
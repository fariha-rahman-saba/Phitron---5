#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        cin >> s;
        for (char ch : s)
        {
            if (!st.empty() && (ch == '1' && st.top() == '0'))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int e;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        vec.push_back(e);
    }
    int q;
    cin >> q;
    int cmd;
    int nw;
    while (q--)
    {
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> nw;
            vec.push_back(nw);
            sort(vec.begin(), vec.end());
            int min = vec[0];
            cout << min << endl;
        }
        else if (cmd == 1)
        {
            if (!vec.empty())
            {
                sort(vec.begin(), vec.end());
                int min = vec[0];
                cout << min << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (cmd == 2)
        {
            if (!vec.empty())
            {
                sort(vec.begin(), vec.end());
                vec.erase(vec.begin());
                if (!vec.empty())
                {
                    int min = vec[0];
                    cout << min << endl;
                }
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}
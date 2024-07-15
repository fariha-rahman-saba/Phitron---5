#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, o, e;
    vector<int> vec;

    cin >> t;
    while (t--)
    {
        cin >> o >> e;
        if (vec.empty())
        {
            vec.push_back(e);
        }

        else if (o == 1)
        {
            vec.insert(vec.begin() + 1, e);
        }
        
        else if (o == 2)
        {
            vec.insert(vec.end() - 1, e);
        }
    }
    for (int s : vec)
    {
        cout << s << " ";
    }

    return 0;
}
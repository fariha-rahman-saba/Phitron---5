#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s, x, newstr = "";
        
        cin >> s >> x;

        int p = 0;

        while ((p = s.find(x, p)) != string::npos)
        {
            s.replace(p, x.length(), "#");
            p += 1;
        }

        cout << s << endl;
    }
}

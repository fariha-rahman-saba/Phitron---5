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
        int n = s.length();
        int m = x.length();
        int j = 0, p;
        int flag = 0;
        int k = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] != x[j])
            {
                newstr += s[i];
                i++;
            }
            else if (s[i] == x[j])
            {
                if (s[i] == x[j] && j == 0)
                {
                    p = i;
                }

                for (k = i; k < i + m; k++)
                {
                    if (s[k] == x[j])
                    {
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                    }
                }

                if (flag == 1 && k == (i + m))
                {
                    newstr += "#";
                    i += m;
                }
            }
        }
        printf("%s\n", newstr);
    }
}
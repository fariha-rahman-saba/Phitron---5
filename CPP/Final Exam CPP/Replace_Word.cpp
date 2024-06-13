#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s, x;
        int flag = 0;
        cin >> s >> x;
        int len = x.length();

        int j = 0;
        int m;
        for (int i = 0; i < s.length(); i++)
        {
            if (j == 0 && s[i] == x[j])
            {
            
                m = i;
            }

            if (s[i] == x[j] && j < len)
            {

                j++;
                flag = 1;
            }
            else if (s[i] != x[j] && j < len)
            {
                flag = 0;
                j = 0;
            }

            if (j == len && flag == 1)
            {
                s.replace(m, len, "#");
                j=0;
                flag=0;
            }
            else if (j==len && flag==0 )
            {
                j=0;
                flag=0;
            }
            
        }
        cout << s << endl;
    }

    return 0;
}
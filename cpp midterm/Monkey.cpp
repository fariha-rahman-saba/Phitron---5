#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int i = 0, len = 0;
        while (s[i] != '\0')
        {
            len++;
            i++;
        }

        sort(s, s + len);

        for (int i = 0; i < len; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else
                cout << s[i];
        }

        cout << endl;
    }
}

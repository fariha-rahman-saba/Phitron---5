#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, find = "Jessica";
    int flag = 0;

    getline(cin, s);
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='J')
        { 
            int p = i;
            if (s[p] == find[j])
            {
                flag = 1;
                j++;
            }
            else
            {
                flag = 0;
                j=0;
            }
        }
        if (j>6 && s[i]!=' ')
        {
            flag=0;
        
        }
        
    }
    if (flag)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
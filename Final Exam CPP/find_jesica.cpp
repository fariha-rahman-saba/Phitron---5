#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, find = "Jessica", word;
    int flag = 0;

    getline(cin, s);

    stringstream ss(s);

    while (ss >> word)
    {
        if (word==find)
        {
            flag=1;
            break;
        }
        
    }
    if(flag)
    {
        cout<<"YES";
    }
    else cout<< "NO";

    return 0;
}
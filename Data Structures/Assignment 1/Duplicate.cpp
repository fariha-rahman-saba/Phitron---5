#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "NO";
    }

    else
    {
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag==0)
            {
                break;
            }
        }
        if (flag==0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
            
    }

    return 0;
}
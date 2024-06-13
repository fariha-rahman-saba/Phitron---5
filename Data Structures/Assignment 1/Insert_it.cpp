#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int ins[m];

    for (int i = 0; i < m; i++)
    {
        cin >> ins[i];
    }

    int idx;
    cin>>idx;

    int newarr[n+m];

    for (int i = 0; i < idx; i++)
    {
        newarr[i]=arr[i];
    }
    int p=0;
    for (int i = idx; i < idx+m; i++)
    {
        newarr[i]=ins[p];
        p++;
    }
    int k = idx;
    for (int i = idx+m; i < m+n; i++)
    {
        newarr[i]=arr[k];
        k++;
    }

    for (int i = 0; i < m+n; i++)
    {
        cout<<newarr[i]<<" ";
    }

    return 0;
}
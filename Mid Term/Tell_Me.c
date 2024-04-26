#include <stdio.h>

int main()
{
    int n, t, k, flag = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
        flag=0;
    }

    return 0;
}
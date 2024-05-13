#include <stdio.h>

int main()
{
    int n, m, flag = 1;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i==(m-j-1))
            {
                if (arr[i][j] == 1)
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] == 0)
                    continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
        else
            continue;
    }

    if (flag == 0)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");

    return 0;
}
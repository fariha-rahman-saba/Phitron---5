#include <stdio.h>

int main()
{
    int n;
    int pri = 0, sec = 0, diff;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (n % 2 == 1)
    {
        sec = arr[n / 2][n / 2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                pri += arr[i][j];
            }
            else if ((i + j) == (n - 1))
            {
                sec += arr[i][j];
            }
        }
    }

    diff = pri - sec;
    // printf("%d %d ", pri, sec);
    if (diff < 0)
    {
        printf("%d", -diff);
    }
    else
        printf("%d", diff);

    return 0;
}
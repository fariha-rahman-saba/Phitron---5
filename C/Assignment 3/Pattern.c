#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int x = 0; x < n - i; x++)
        {
            printf(" ");
        }

        if (i % 2 == 1)
        {
            if (i == 1)
            {
                printf("#\n");
            }

            else
            {
                for (int j = 1; j <= i * 2 - 1; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else
        {
            for (int m = 1; m <= i * 2 - 1; m++)
            {
                printf("-");
            }
            printf("\n");
        }
    }



    for (int i = n+1; i <= n*2-1; i++)
    {
        for (int x = 1; x <= i - n; x++)
        {
            printf(" ");
        }

        if (i % 2 == 1)
        {
            if (i == 2*n-1)
            {
                printf("#\n");
            }

            else
            {
                for (int j = 1; j <= 2 * (2 * n - i) - 1; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else
        {
            for (int m = 1; m <= 2 * (2 * n - i) - 1; m++)
            {
                printf("-");
            }
            printf("\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    long long int n, t, digit;
    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if (n == 0)
        {
            printf("0\n");
        }
        else
        {

            while (n > 0)
            {
                digit = n % 10;
                printf("%lld ", digit);
                n = n / 10;
            }
            printf("\n");
        }
    }

    return 0;
}
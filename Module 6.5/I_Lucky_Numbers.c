#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d", &n);
    d = n % 10;
    n = n / 10;
    if (d % n == 0 || n % d == 0)
    {
        printf("YES");
    }
    else

        printf("NO");

    return 0;
}
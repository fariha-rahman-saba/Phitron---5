#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n>0)
    {
        int d = n%10;
        printf("%d", d);
        n=n/10;
    }

    return 0;
}

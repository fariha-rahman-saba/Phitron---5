#include <stdio.h>

int main()
{
    long long int n, s;
    scanf("%lld", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &s);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}
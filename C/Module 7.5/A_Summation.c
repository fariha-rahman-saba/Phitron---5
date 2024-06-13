#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    if (sum < 0)
    {
        printf("%lld", -sum);
    }

    else
        printf("%lld", sum);

    return 0;
}
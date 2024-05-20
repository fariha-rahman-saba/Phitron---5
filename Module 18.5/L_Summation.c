#include <stdio.h>
long long int res = 0;
long long int sum(int arr[], int n)
{

    if (n < 0)
    {
        return res;
    }

    else
    {
        res += arr[n];
        sum(arr, n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int res = sum(arr, n - 1);
    printf("%lld", res);

    return 0;
}
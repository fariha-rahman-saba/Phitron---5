#include <stdio.h>

int main()
{
    int n, x, v;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    scanf("%d %d", &x, &v);
    arr[x] = v;
    printf("%d \n", arr[x]);
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
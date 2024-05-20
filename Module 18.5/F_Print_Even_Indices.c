#include <stdio.h>

void printarr(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    else
    {
        if (n % 2 == 0)
        {
            printf("%d ", arr[n]);
            
        }
        printarr(arr, (n - 1));
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
    printarr(arr, n - 1);

    return 0;
}
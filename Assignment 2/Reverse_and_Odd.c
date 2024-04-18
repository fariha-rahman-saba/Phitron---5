#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (i % 2 == 1)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    for (int k = j - 1; k >= 0; k--)
    {
        printf("%d ", arr2[k]);
    }

    return 0;
}

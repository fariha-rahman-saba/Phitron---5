#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d ", n);

    int arr[n], val;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        // printf("%d ", val);

        if (val < 0)
        {
            arr[i] = 2;
        }
        else if (val > 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
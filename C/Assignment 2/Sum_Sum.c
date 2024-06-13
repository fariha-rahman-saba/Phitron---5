#include <stdio.h>

int main()
{
    int n,sump=0,sumn=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>=0)
        {
            sump=sump+arr[i];
        }
        else{
            sumn=sumn+arr[i];
        }
    }

    printf("%d %d", sump,sumn);

    return 0;
}
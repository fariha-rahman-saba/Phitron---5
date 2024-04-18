#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, val,min_i;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (val<min)
        {
            min = val;
            min_i=i;
        }
    }

    printf("%d %d", min, min_i+1);

    return 0;
}
#include <stdio.h>

int main()
{
    int n,two=0,three=0;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        if (arr[i]%2==0)
        {
            two++;
        }
        else if (arr[i]%3==0)
        {
            three++;
        }
        
        
    }

    printf("%d %d", two, three);

    return 0;
}
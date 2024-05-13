#include <stdio.h>

void odd_even() 
{
    int odd=0,even=0;
    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else odd++;
    }
    printf("%d %d", even,odd);

}

int main()
{
    
    

    odd_even() ; 
    return 0;
}
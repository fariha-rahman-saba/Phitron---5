#include <stdio.h>

int main()
{
    int n,pos=0,neg=0,odd=0,even=0,val;
    scanf("%d", &n);
    for (int i = 0; i <n ; i++)
    {
        scanf("%d", &val);

        if (val==0)even++;

        else if (val<0)
        {
            neg++;
            if (val%2==0)
            {
                even++;
            }
            else odd++;
            
        }
        else {
            pos++;
            if (val%2==0) even++;
            else odd++;
        }
        
    }
    
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    
    return 0;
}
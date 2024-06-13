#include <stdio.h>

int main()
{
    int x,y,mina,rina,res;
    scanf("%d %d", &x, &y);
    res = (x-y)/2;
    mina = res +y;
    printf("%d %d", mina, res);
    
    return 0;
}
#include <stdio.h>

int main()
{
    int D,Q,R, Div;
    scanf("%d %d %d", &D, &Q, &R);
    Div = (D-R)/Q;
    printf("%d", Div);
    return 0;
}
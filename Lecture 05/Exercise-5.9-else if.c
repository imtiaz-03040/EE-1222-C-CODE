#include <stdio.h>
void main()
{
    int x, y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("y=%d", y);
}
#include <stdio.h>
#include <math.h>

void main()
{
    double x,y,frac;
    int integer;
    printf("Table for y= exp(-x):\n\n");
     printf("x    ");
    for ( frac = 0.1; frac < 1.0; frac += 0.1)
        {
        printf("%6.1f ", frac);
    }
    printf("\n");
    for ( integer = 0; integer < 10; integer++)
    {
        printf("%.1f  ", (double)integer);
        for ( frac = 0.1; frac < 1.0; frac += 0.1)
            {
             x = integer + frac;
             y = exp(-x);
            printf("%6.4f ", y);
        }
        printf("\n");
    }
}

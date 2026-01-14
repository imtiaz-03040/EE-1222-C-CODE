#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, x1, x2;
    printf("Enter the values of a,b,c:");
    scanf("%f%f%f", &a, &b, &c);
    x = -c / b;
    x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
    x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
    if (a == 0 && b == 0)
    {
        printf("There is no solution for the equation.\n");
    }
    else if (a == 0)
    {
        printf("There is only one root\n");
        printf("x=%.2f", x);
    }
    else if ((b * b - 4 * a * c) < 0)
    {
        printf("There are no real roots\n");
    }
    else
    {
        printf("There are two real roots\n");
        printf("x1=%.2f\n", x1);
        printf("x2=%.2f\n", x2);
    }
    return 0;
}
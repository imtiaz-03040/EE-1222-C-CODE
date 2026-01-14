#include <stdio.h>
#include <math.h>

void main()
 {
    double x;
    char T;


    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the trigonometric function type (s/S for sin, c/C for cos, t/T for tan): ");
    scanf(" %c", &T);


    if (T == 's' || T == 'S')
        {
        printf("sin(%.2f) = %.4f\n", x, sin(x));
    }
    else if (T == 'c' || T == 'C')
        {
        printf("cos(%.2f) = %.4f\n", x, cos(x));
    }
    else if (T == 't' || T == 'T')
        {
        printf("tan(%.2f) = %.4f\n", x, tan(x));
    }
    else
        {
        printf("Invalid trigonometric function type entered!\n");

    }

 }
